import java.util.Scanner;

class Table{
    void printT(int n) throws InterruptedException {
        for(int i=1;i<10;i++){
            System.out.println(n+"x"+i+"="+n*i);

        }
    }
}

class t extends Thread {
    Table T;
    int n;

    t(Table T, int n) {
        this.T = T;
        this.n = n;

    }

    public void run() {
        try {
            T.printT(n);
            Thread.sleep(4000);
        } catch (InterruptedException e) {
            throw new RuntimeException(e);
        }
    }
}

class t3 extends Thread{
        Table T;
       int n;
        t3(Table T) {
            this.n = n;
            this.T = T;
        }

    public void run(){
        try {
            T.printT(n);

        } catch (InterruptedException e) {
            throw new RuntimeException(e);
        }

    }

}
public class Thread_Sync {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a number:");
        int num=sc.nextInt();
        System.out.println("Enter another number:");
        int num1=sc.nextInt();

        Table obj=new Table();
        t nto=new t(obj,num);
        t nto1=new t(obj,num1);
        nto.start();
        nto1.start();



    }
}
