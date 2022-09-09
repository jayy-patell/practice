#include <stdio.h>

int main(){
    
//    //for single armstrong number
//    int num=0, n=0, digit, sum=0;
//    printf("Enter the number: ");
//    scanf("%d", &num);
//    n=num;
//    while(num>0){
//        digit=num%10;
//        sum=sum+(digit*digit*digit);
//        num=num/10;
//    }
//    if(sum==n){
//        printf("%d is a Armstrong Number.", n);
//    }else 
//        printf("%d is Not a Armstrong Number.", n);


//for all armstrong nos till a limit

    int num, n, sum, digit, lim;
    printf("Enter the number: ");
    scanf("%d", &lim);
    n=1;
    do{
        sum=0;
        num=n;
//        do{
//            digit=num%10;
//            sum=sum+(digit*digit*digit);
//            num/=10;
//        }while(num>0);
        while(num>0){
            digit=num%10;
            sum=sum+(digit*digit*digit);
            num/=10;
        }
        if (sum==n)
            printf("%d\t", n);
        n++;
    }while(n<lim);
    
        
        
    return 0;
}

