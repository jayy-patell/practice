#include<stdio.h>

int main(){
    int num=0, sum=0, digit=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    while(num>=10){
//        for (sum=0; num > 0; num/=10)
//        {
//            digit = num % 10;
//            sum += digit;  
//        }
        sum=0;
        while(num>0){
            sum=sum+(num%10);
            num/=10;
        }
        if(sum>=10){
            printf("Sum is %d\n", sum);
            num=sum;
        }else{
            printf("The genric number is: %d\n", sum);
        }
    }
    return 0;

}




//#include <stdio.h>
// 
//int main()
//{
//  int Number, Sum, Reminder;
// 
//  printf("\n Please Enter any number\n");
//  scanf("%d", &Number);
// 
//  while(Number >= 10)
//  {
//    for (Sum=0; Number > 0; Number= Number/10)
//    {
//      Reminder = Number % 10;
//      Sum=Sum + Reminder;  
//    }
//    if(Sum >= 10)
//    {
//      Number = Sum;
//    }
//    else
//    {
//      printf("\n The Generic Root of a Given Number = %d", Sum);
//      return 0;
//    }
//  } 
//}