import java.util.Random;
public class JoinExample implements Runnable {
    private Random rand = new Random(System.currentTimeMillis());

    public void run() {
        //simulate cpu expensive task by sleeping
        try {
            Thread.sleep(5000);
        } catch (InterruptedException e) {
            System.out.println("Error");
        }

        System.out.println("[" + Thread.currentThread().getName() + "] finished.");
    }

    public static void main(String[] args) throws InterruptedException {
        Thread[] threads = new Thread[5];
        for(int i=0; i < threads.length; i++) {
            threads[i] = new Thread(new JoinExample(), "joinThread-" + i);
            threads[i].start();
        }

        for(int i=0; i < threads.length; i++) {
            threads[i].join();
        }

        System.out.println("[" + Thread.currentThread().getName() + "] All threads have finished.");
    }
}

