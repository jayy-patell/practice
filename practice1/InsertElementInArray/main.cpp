#include <stdio.h>

int main(){
    int i,n,ele,pos;
    int a[100];
    printf("Enter no.of elements in array: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    
    printf("Entered array is: ");
    for(i=0;i<n;i++){
        printf("%d\t", a[i]);
    }
    
    printf("Enter new element and position of insertion: ");
    scanf("%d%d", &ele,&pos);
    for(i=n;i>=pos;i--){
        a[i]=a[i-1];
    }
    a[pos-1]=ele;
    
    //n=n+1;
    printf("The array after insertion is: ");
    for(i=0;i<n+1;i++){
        printf("%d\t", a[i]);
    }
    
    return 0;
}
