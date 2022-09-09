#include<stdio.h>
#include<string.h>

int main(){
    int i=0;
    char string[30];
    printf("Enter a string: ");
    gets(string);
    
    
    printf("After toggling each character: ");
    //fflush(stdin);
    for(i=0;string[i]!='\0';i++){
        if(string[i]>='A' && string[i]<='Z'){
            string[i]+=32;
        }
        else if(string[i]>='a' && string[i]<='z'){
            string[i]-=32;
        }
    }
    puts(string);
    
    return 0;
}
