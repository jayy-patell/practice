//*****************NUMERIC PALINDROME********************

//#include <stdio.h>
//
//int main() {
//    int digit;
//    int num{0}, num1{0} , rev{0};
//    printf("Enter a number to check if its a palindrome: ");
//    scanf("%d", &num);
//    num1=num;
//    while(num>0) {
//            digit=num%10;
//            rev=rev*10+digit;
//            num/=10;
//    }
//    if (num1==rev)
//        printf("%d It is a palindrome", rev);
//    else
//        printf("%d It is not a palindrome", rev);
//    
//    return 0;
//}



/******************STRING PALINDROME***********************/
#include<stdio.h>
#include<string.h>

int main(){
    int i,j,n=0,flag=0;
    char string[30];
    printf("Enter a string: ");
    gets(string);
    fflush(stdin);
    
    for(i=0;string[i]!='\0';i++){
        n++;
    }
    for(j=0;j<n/2;j++){
        if(string[j]!=string[n-j-1]){
            flag=1;
            break;
        }
    }
    
    
    if(flag==0){
        printf("It is a palindrome.");
    } else{
        printf("NOT a palindrome.");
    }
    
    return 0;
}


