
class AccountBalance {

    private static double balance = 0;
    public AccountBalance(double initAmount) {
        balance = initAmount;
    }

    public double getBalance() {
        return balance;
    }
    public void deposit(double amount) {
        System.out.println("Depositing " + amount);
        balance = balance+amount;
    }

    public void withdraw(double amount) {
        System.out.println("Withdrawing " + amount);
        if(amount <= balance)
            balance = balance - amount;
        else
            System.out.println("Low Balance");
     }
}

class Depositer extends Thread {
    private AccountBalance_sync account;
    public Depositer(AccountBalance_sync account) {
        this.account = account;
    }

    public void run() {
        for(int i = 0; i < 5; i++)
            account.deposit(100);
    }
}

class Withdrawer extends Thread {
    private AccountBalance_sync account;
    public Withdrawer(AccountBalance_sync account) {
        this.account = account;
    }

    public void run() {
        for(int i = 0; i < 4; i++)
            account.withdraw(50);
    }
}

public class Balance {
    public static void main(String[] args) {
        int numThreads = 10;

        AccountBalance_sync account = new AccountBalance_sync(10000);

        Thread[] mythreads = new Thread[numThreads];

        for(int i = 0; i < numThreads; i++) {
            if(i % 2 == 0)
                mythreads[i] = new Depositer(account);
            else
                mythreads[i] = new Withdrawer(account);
        }

        for(int i = 0; i < numThreads; i++)
            mythreads[i].start();

        for(int i = 0; i < numThreads; i++) {
            try {
                mythreads[i].join();
            } catch (InterruptedException err) {
                System.err.println(err.getMessage());
            }
        System.out.println("Final Balance: " + account.getBalance());
        }
    }
}
