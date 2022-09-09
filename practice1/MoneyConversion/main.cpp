#include <stdio.h>

int main() {
    
//    //using normal method
//    int dollars, balance, quarter, nickels, dimes, pennies, amount;     //you can also create value constants
//    printf("Enter amount of money in cents: ");
//    scanf("%d", &amount);
//    
//    dollars=amount/100;
//    balance=amount-dollars*100;
//    
//    quarter=balance/25;
//    balance=balance-quarter*25;
//    
//    dimes=balance/10;
//    balance=balance-dimes*10;
//    
//    nickels=balance/5;
//    balance=balance-nickels*5;
//    
//    pennies=balance;
//    
//    printf("You have to pay: %d dollars, %d quarter, %d nickels, %d dimes, %d pennies", dollars,quarter,dimes,nickels,pennies);
    
    
    //using modulo method
    int dollars, balance=0, quarter, nickels, dimes, pennies, amount;
    printf("Enter amount of money in cents: ");
    scanf("%d", &amount);
    
    dollars=amount/100;
    balance=amount%100;
    
    quarter=balance/25;
    balance%=25;
    
    dimes=balance/10;
    balance%=10;
    
    nickels=balance/5;
    balance%=5;
    
    pennies=balance;
    
    printf("You have to pay: %d dollars, %d quarter, %d nickels, %d dimes, %d pennies", dollars,quarter,dimes,nickels,pennies);
    
    return 0;
}