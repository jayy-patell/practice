#include <stdio.h>

int main(){
    int n, number, triangularNum, counter=1;
    while(counter<=5){
        printf("What traingular number you want?? ");
        scanf("%d", &number);
        triangularNum=0;
        n=1;
        while(n<=number){
            triangularNum+=n;
            n++;
        }
        printf("The %dth triangular number is %d.\t\n", n-1, triangularNum);
        counter++;
    }
    return 0;
}
