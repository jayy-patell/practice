#include <stdio.h>

int main() {
    int n,i,j,temp;
    printf("Enter No of terms: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter elements: ");
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    printf("The entered array is: ");
    for(i=0;i<n;i++){
        printf("%d\t", a[i]);
    }
    
    //reversing an array
//    for(i=0,j=n-1;i<n/2;i++,j--){
//        temp=a[i];
//        a[i]=a[j];
//        a[j]=temp;
//    }
    for(i=0;i<n/2;i++){
        temp=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=temp;
    }
    
    printf("The reversed array is: ");
    for(i=0;i<n;i++){
        printf("%d\t", a[i]);
    }
    
    return 0;
}
