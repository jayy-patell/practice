#include <stdio.h>
#include <math.h>

int main(){
	int bin,binary,k,sum,p=0;
	printf("Enter binary number: ");
	scanf("%d", &bin);
	binary=bin;

do{
	k = bin % 10;
	sum += k*pow(2,p);
	p++;
	bin = bin/10;
}while(bin!=0);

	printf("The decimal equivalent of %d is: %d", binary, sum);

	return 0;
}
