#include <stdio.h>

int main(){
    int i,j;
    int m,n;
    printf("Enter dimensions of matrix: ");
    scanf("%d%d", &m,&n);
    int a[m][n];
    printf("Enter elements of matrix: ");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d", &a[i][j]);
        }
    }
    
    printf("The matrix is:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    
    printf("The transpose of that matrix is:\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d\t", a[j][i]);
        }
        printf("\n");
    }
    
    return 0;
}
