#include <stdio.h>

int main() {
    int i,j,k,m,n,p,q;
    
    printf("Enter rows and columns of first matrix: ");
    scanf("%d%d", &m,&n);
    int a[m][n];
    printf("Enter elements of first matrix: ");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d", &a[i][j]);
        }
    }
    
    printf("Enter rows and columns of second matrix: ");
    scanf("%d%d", &p,&q);
    int b[p][q];
    printf("Enter elements of second matrix: ");
    for(i=0;i<p;i++){
        for(j=0;j<q;j++){
            scanf("%d", &b[i][j]);
        }
    }
    
    int c[m][q];
    
    if(p==n){
        printf("After multiplying: ");
        for(i=0;i<m;i++){        //for changing rows in first matrix
            for(j=0;j<q;j++){         //for changing columns in second matrix
                c[i][j]=0;
                for(k=0;k<n;k++){          //for changing element while going down in second array and simultaneously going sideways in first matrix. 
                    c[i][j]=c[i][j]+a[i][k]+b[k][j];
                }
            }
        }
        
        printf("\nThe product matrix is: \n");
        for(i=0;i<p;i++){
            for(j=0;j<q;j++){
                printf("%d\t", c[i][j]);
            }
            printf("\n");
        }
        
    }else{
        printf("Cannot multiply.");
    }
    
    return 0;
}