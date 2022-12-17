import java.util.*;

class Sum implements Runnable{
    int arr[];
    int sum;
    Thread t;
    Sum(int[] arr){
        sum = 0;
        this.arr = arr;
        t = new Thread(this);
        t.start();
    }
    public void run(){
        for(int i=0;i<arr.length;i++){
            sum += arr[i];
        }
        System.out.println("Sum is: "+sum);
    }
}

public class colSum {
    public static void main(String[] args) {
        int arr[][] = {{1,2,3},{4,5,6},{7,8,9}};
        int col1[]=new int[3];
        int col2[]=new int[3];
        int col3[]=new int[3];

        for(int i=0;i<arr.length;i++){
            col1[i] = arr[i][0];
        }
        for(int i=0;i<arr.length;i++){
            col2[i] = arr[i][1];
        }
        for(int i=0;i<arr.length;i++){
            col3[i] = arr[i][2];
        }
        
        Sum s1 = new Sum(col1);
        Sum s2 = new Sum(col2);
        Sum s3 = new Sum(col3);

        try{
            s1.t.join();
            s2.t.join();
            s3.t.join();
        }catch(InterruptedException e){
            System.out.println(e);
        }

    }
}
