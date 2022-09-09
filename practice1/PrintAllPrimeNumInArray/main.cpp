#include <stdio.h>

int main() {
    int i,j,n, flag=0;
    printf("Enter no of terms in array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter Elements: ");
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    
    printf("Prime nos. in array are- ");
    for(i=0;i<n;i++){
        flag=0;
        for(j=2;j<a[i];j++){     //why not working with a[i]/2
            if(a[i]%j==0){
                flag=1;
                break;
            }
        }
        if(flag==0 && a[i]!=1){
            printf(" %d", a[i]);
        }
    }
    
    return 0;
}
