import java.util.*;

class nope{
    static <T extends Number> T median(T[] arr){
        for(int i=0;i<arr.length;i++){
            for(int j=0;j<i;j++){
                if(((Comparable<T>) arr[j]).compareTo(arr[j+1]) > 0){
                    T swap = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = swap;
                }
            }
        }

        T med = arr[arr.length/2];
        // for(int i=0;i<arr.length;i++){
        //     if(arr.length/2 == i){
        //         med = arr[i]; break;
        //     }
        // }

        return med;
    }

}

class gen {
    public static void main(String[] args) {
        nope n1 = new nope();
        Integer arr[] = {1,2,3,4,5};
        Integer m = nope.median(arr);
        System.out.println(m);
    }
}
