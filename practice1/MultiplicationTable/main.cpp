#include <stdio.h>

int main(){
    int i,j,k,n;
    printf("Enter no of tables and upto what num should be multiplied: ");
    scanf("%d%d", &n,&k);
    for(i=1;i<=n;i++){
        for(j=1;j<=k;j++){
            printf("%d * %d = %d\n", i,j,(i*j));
        }
        printf("\n");
    }
    return 0;
}
