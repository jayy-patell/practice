#include <stdio.h>
#include<math.h>

int main() {
    int i,j,m,n,sum=0,trace=0;
    float norm=0;
    printf("Enter dimensions of matrix: ");
    scanf("%d%d", &m,&n);
    int a[m][n];
    printf("Enter elements: ");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d", &a[i][j]);
        }
    }
    
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    
    for(i=0;i<m;i++){
        trace+=a[i][i];
        for(j=0;j<n;j++){
            sum=sum+(a[i][j]*a[i][j]);
        }
    }
    norm= sqrt(sum);
    printf("\nThe trace is %d\n", trace);
    printf("The norm is %f\n", norm);
    
    return 0;
}
