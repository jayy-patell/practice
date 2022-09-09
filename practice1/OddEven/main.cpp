#include <stdio.h>

int main() {
    int digit, num, oc=0, ec=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num>0){
        digit=num%10;
        num=num/10;
        if(digit%2==0){
            ec++;
        }else{
            oc++;
        }
    }
    printf("No. of odds=%d\nNo. of evens=%d\n", oc,ec);
}
