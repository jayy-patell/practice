#include <stdio.h>

int main() {
    int yrs, weeks, days, months;
    printf("Enter No. of Days: ");
    scanf("%d", &days);
    
    yrs=days/365;
    weeks=days/7;
    months=days/30;
    
    printf("Years-%d and %ddays, weeks-%d and %ddays, months-%d and %ddays", yrs,(days-yrs*365),weeks,(days-weeks*7),months,(days-months*30));
    
    return 0;
}