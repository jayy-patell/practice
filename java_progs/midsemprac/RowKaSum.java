class RowSum implements Runnable{
	
	Thread t;
	int arr[];
	int sum=0;
	int n;
	RowSum(int a[],int i)
	{
		t=new Thread(this);
		arr=a;
		n=i;
		t.start();
	}
	public void run() 
	{
	 for(int i=0;i<arr.length;i++)
	{
		sum=sum+arr[i];
	}
	
	System.out.println("Row Sum "+n+" :"+sum);
   }


}
public class RowKaSum {
	
	public static void main(String arsgs[])
	{
		int arr[][]= {{1,2,3},{2,3,4},{4,5,6}};
		
		
       RowSum tr[]=new RowSum[arr.length];
       
       for(int i=0;i<arr.length;i++)
       {
    	   tr[i]=new RowSum(arr[i],i+1);
       }
       try {
    	   for(int i=0;i<arr.length;i++)
    	   {
    		   tr[i].t.join();
    	   }
       }
    	   catch(InterruptedException e)
    	   {
    		   System.out.println("Caught");
    	   }

}
}