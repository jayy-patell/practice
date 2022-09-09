#include <stdio.h>

int main() {
    float a,b,sum,diff,prod,quotient;
    printf("Enter two numbers: ");
    scanf("%f%f", &a,&b);
    
    sum=a+b;
    diff=a-b;
    prod=a*b;
    quotient = (a/b);
    
    printf("The sum is : %f\n", sum);
    printf("The difference is : %f\n", diff);
    printf("The product is : %f\n", prod);
    printf("The quotient is : %f\n", quotient);  //cannot use two integer nos to get a float value
    
    return 0;
}
