#include <stdio.h>

int main (){
    int i=0,count=1;
    char sent[30];
    printf("Enter a sentence: ");
    gets(sent);
    
    while(sent[i]!='\0'){
        if(sent[i]==' ' && sent[i+1]!=' ')
            count++;
        i++;
    }
    printf("No. of words= %d", count);
    return 0;
}