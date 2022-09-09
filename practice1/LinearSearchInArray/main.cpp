#include <stdio.h>

int main(){
    int i,n,num,flag=0,pos;
    printf("Enter no. of terms in array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter elements: ");
    for(i=0;i<n;i++)
        scanf("%d", &a[i]);
        
    printf("\nEntered array is: ");
    for(i=0;i<n;i++)
        printf("%d\t", a[i]);    
        
    printf("\nEnter number to be searched: ");
    scanf("%d", &num);
    for(i=0;i<n;i++){
        if(a[i]==num){
            flag=1;
            pos=i+1;
            break;
        }
    }
    
    if(flag==1)
        printf("\nThe number has been found at %d position.", pos);
    else
        printf("The number was not found.");
        
    return 0;
}
