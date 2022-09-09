#include <stdio.h>

int main() {
    
//    //using while loop
//    int i,j,m,n;
//    printf("Enter the limits between which you want to genrate prime numbers: ");
//    scanf("%d%d", &m,&n);
//    i=m;
//    while(i<n){
//        int prime=1;
//        j=2;
//        while (j<i){
//            if (i%j==0){
//                prime=0;
//                break;
//            }
//            j++;
//        }
//        if (prime==1)
//            printf("%d\t", i);
//        i++;
//    }
    
    //using for loop
    int i,j,m,n;
    printf("Enter the limits between which you want to genrate prime numbers: ");
    scanf("%d%d", &m,&n);
    
    for(i=m;i<=n;i++){
        int prime=1;
        for(j=2;j<i;j++){
            if(i%j==0){
                prime=0;
                break;
            }
        }
        if (prime==1 && i!=1)
            printf("%d\t", i);
    }
    
    
    
    return 0;
}
