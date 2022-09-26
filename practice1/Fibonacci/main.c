// #include <stdio.h>

// void fibFn(int lim){
//     int i,first,sec,next;
//     if(lim<0){
//         printf("Limit entered should be positive.");
//     }else{
//         first=0;sec=1;
//         for(i=1;i<=lim;i++){
//             printf("%d\t", first);
//             next=first+sec;
//             first=sec;
//             sec=next;
//         }
//     }
// }

// int main(){
//     int n;
//     printf("Enter limit: ");
//     scanf("%d", &n);
//     printf("Printing first n fibonacci numbers: ");
//     fibFn(n);
//     return 0;
// }


/* ******************USING RECURSION********************************* */

#include<stdio.h>
#include<stdlib.h>

int Fib(int n){
    //base case
    if(n==0 || n==1)
        return n;

    return Fib(n-1) + Fib(n-2);
}

int main(){
    int n;
    printf("Enter No. of Fibonacci number you want: ");
    scanf("%d",&n);
    for(int i=0;i<=n-1;i++){
        printf("%d  ", Fib(i));
    }
    return 0;
}