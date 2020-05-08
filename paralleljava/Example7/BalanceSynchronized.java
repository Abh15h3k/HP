import java.util.Random;

class AccountBalanceSynchronized {

    private static double balance = 0;
    public AccountBalanceSynchronized(double initAmount) {
        balance = initAmount;
    }

    public double getBalance() {
        return balance;
    }
    public void deposit(double amount) {
        balance = balance+amount;
        System.out.println("After Deposit: " + balance);
    }

    public void withdraw(double amount) {
        if(amount <= balance)
            balance = balance - amount;
        else
            System.out.println("Low balance");
        System.out.println("After Withdraw: " + balance);
     }
}

class DepositerSynchronized extends Thread {
    private AccountBalanceSynchronized account;
    public DepositerSynchronized(AccountBalanceSynchronized account) {
        this.account = account;
    }

    public void run() {
        for(int i = 0; i < 5; i++)
            synchronized(account) {
                account.deposit(100);
                account.notify();
            }
    }
}

class WithdrawerSynchronized extends Thread {
    private AccountBalanceSynchronized account;
    public WithdrawerSynchronized(AccountBalanceSynchronized account) {
        this.account = account;
    }

    public void run() {
        Random rand = new Random();
        for(int i = 0; i < 5; i++)
           synchronized(account) {
               while(account.getBalance() < 100) {
                   try {
                       account.wait();
                   } catch (InterruptedException err) {
                       System.err.println(err.getMessage());
                   }
               }
               account.withdraw(100);
           }
    }
}

public class BalanceSynchronized {
    public static void main(String[] args) {
        int numThreads = 10;

        AccountBalanceSynchronized account = new AccountBalanceSynchronized(1000);

        Thread[] mythreads = new Thread[numThreads];

        for(int i = 0; i < numThreads; i++) {
            if(i % 2 == 0)
                mythreads[i] = new DepositerSynchronized(account);
            else
                mythreads[i] = new WithdrawerSynchronized(account);
        }

        for(int i = 0; i < numThreads; i++)
            mythreads[i].start();

        for(int i = 0; i < numThreads; i++) {
            try {
                mythreads[i].join();
            } catch (InterruptedException err) {
                System.err.println(err.getMessage());
            }
        }
        System.out.println("Final Balance: " + account.getBalance());
    }
}
