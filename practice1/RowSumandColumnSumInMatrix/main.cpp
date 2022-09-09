#include <stdio.h>

int main(){
    int i,j,m,n;
    int a[10][10];
    int rowsum[10], colsum[10];
    
    printf("Enter dimensions of matrix: ");
    scanf("%d%d", &m,&n);
    printf("Enter elements of matrix: ");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d", &a[i][j]);
        }
    }
    
    //for rowsum
    for(i=0;i<m;i++){
        rowsum[i]=0;
        for(j=0;j<n;j++){
            rowsum[i]=rowsum[i]+a[i][j];
        }
    }
    
    //for colsum
    for(i=0;i<n;i++){
        colsum[i]=0;
        for(j=0;j<m;j++){
            colsum[i]=colsum[i]+a[j][i];
        }
    }
    
    //printing matrix with rowsum and colsum
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d\t", a[i][j]);
        }
        printf(" -->%d", rowsum[i]);
        printf("\n");
    }
    
    for(j=0;j<n;j++){
        printf("%d\t", colsum[j]);
    }
    
    
    return 0;
}
