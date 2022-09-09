class MergeSort{
    public static void main(String[] args) {
        int i = 0;
        int[] data = new int[]{-5,20,10,3,2,0};
        mergeSort(data, 0, data.length - 1);
        // System.out.println("Stop");
        for(i=0;i<data.length;i++) {
            System.out.print(data[i] + " ");
        }
    }

    public static void mergeSort(int[] data, int start,int end){
        if(start < end){
            int mid = (start + end)/2;
            mergeSort(data, start, mid);   //leftside first
            mergeSort(data, mid + 1, end);
            merge(data, start, mid, end);
        }
    }

    public static void merge(int[] data, int start, int mid, int end){
        int[] temp = new int[end-start+1];

        int i=start,j=mid+1,k=0;

        while(i<=mid && j<=end){
            if(data[i] <= data[j]){
                temp[k++] = data[i];
                i++;
            }else{
                temp[k++] = data[j];
                j++;
            }
        }

        while(i<=mid){
            temp[k++]=data[i++];
        }
        while(j<=end){
            temp[k++]=data[j++];
        }

        for(i=start;i<=end;i++){
            data[i]=temp[i-start];
        }
    }
}
