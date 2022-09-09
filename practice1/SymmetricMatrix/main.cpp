#include <stdio.h>

int main(){
    int m,n,i,j,count=0;
    printf("Enter dimensions of matrix: ");
    scanf("%d%d", &m,&n);
    int a[m][n];
    int b[m][n];
    printf("Enter elements of matrix: ");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d", &a[i][j]);
        }
    }
    
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            b[i][j]=a[j][i];
        }
    }
    
    //checking if transpose=matrix
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(b[i][j]!=a[i][j]){
                count++;
                break;
            }
        }
    }

    if(count==0)
        printf("The matrix is SYMMETRIC");
    else
        printf("The matrix is NOT SYMMETRIC");
 

    return 0;
}
