#include <stdio.h>

int main(){
    int i,n,pos;
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
    
    
    printf("\nEnter position at which you want to delete the element: ");
    scanf("%d", &pos);
    for(i=pos-1;i<n;i++){          //why not for(i=n;i>=pos;i--)
        a[i]=a[i+1];
    }
//    for(i=n-1;i>=pos-1;i--){          
//        a[i-1]=a[i];
//    }
    
    //n=n-1;
    printf("\nThe array after deleting element is: ");
    for(i=0;i<n-1;i++){
        printf("\t%d", a[i]);
    }
    
    return 0;
}
