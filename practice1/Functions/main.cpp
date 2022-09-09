//#include<stdio.h>
//
//int Largest(int x[], int y){
//    int i,l=0;
//    for(i=0;i<y;i++){
//        if(x[i]>l){
//            x[i]=l;
//        }
//    }
//    return l;
//}
//
//int main(){
//    int i,n,b;
//    printf("Enter size of array: ");
//    scanf("%d", &n);
//    int a[n];
//    printf("Enter elements: ");
//    for(i=0;i<n;i++){
//        scanf("%d", &a[i]);
//    }
//    b=Largest(a,n);
//    printf("The largest value is: %d", b);
//    return 0;
//}



//#include<stdio.h>
//#include<string.h>
//
//void isPalin(char str[]){
//    int i,len,c=0;
//    len=strlen(str);
//    for(i=0;str[i]!='\0';i++){
//        if(str[i]!=str[len-i-1])
//            c++;
//    }
//    if(c==0)
//        printf("Palindrome.");
//    else
//        printf("NOT a palindrome.");
//}
//
//int main(){
//    char sent[100];
//    printf("ENter the string: ");
//    gets(sent);
//    isPalin(sent);
//    return 0;
//}



#include<stdio.h>

int Fact(int n){
    int a=1,i;
    for(i=1;i<=n;i++)
        a=a*i;
    return a;
}

int main(){
    int y,r,n;
    printf("Input N: ");
    scanf("%d", &n);
    printf("Input R: ");
    scanf("%d", &r);
    
    y=Fact(n)/Fact(n-r)*Fact(r);
    printf("NCR is: %d", y);

    return 0;
}