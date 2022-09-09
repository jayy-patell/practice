#include <stdio.h>

float coeff(){
    
}

int main() {
    const float pi=3.14;
    int i, n=0;
    float x=0, term=0, sum=0;
    printf("Enter value and upto which term: ");
    scanf("%f%d", &x,&n);
    
    x=x*(pi/180);
    term=x;
    sum=x;
    
    for(i=1;i<n;i++){
        term *= ((-1*x*x)(2*i*(2*i+1)));
        sum+=term;
    }
    
    printf("Answer is: %f", sum);
    
    return 0;
}
