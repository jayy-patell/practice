#include <stdio.h>

int main(){
    int low=0,high=0,mid=0,key=0,n=0,i;
    printf("Enter no. of elements in array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter array elements: ");
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    printf("Entered array is: ");
    for(i=0;i<n;i++){
        printf("%d\t", a[i]);
    }
    
    printf("\nEnter element to be searched: ");
    scanf("%d", &key);
    
    low=0;
    high=n-1;
    //mid=(high+low)/2;
    
    do{
        mid=(high+low)/2;
        if(key<a[mid]){
            high=mid-1;
        }
        if(key>a[mid]){
            low=mid+1;
        }
    }while(key!=a[mid] && low<=high);
    
    if(key==a[mid]){
        printf("Element found at %d position\n", mid+1);
    }else{
        printf("Error 404");
    }
    
    return 0;
}
