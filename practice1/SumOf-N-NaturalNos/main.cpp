#include <stdio.h>

int main(){
    int n=0, limit, sum=0;
    printf("Enter number till which you want the sum: ");
    scanf("%d", &limit);
    do{
        sum+=n;
        n++;
    }while(n<=limit);
    
    int mean = sum/(n);
    
    printf("The sum is: %d\n", sum);
    printf("The mean is: %d", mean);

    return 0;
}