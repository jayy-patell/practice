// #include <stdio.h>
// void main()
// {
// 	char str[80],search[20];	
// 	int c1=0,c2=0,i,j,flg;
	
//        printf("\n\nCheck whether a given  substring is present in the given string :\n");
//        printf("-------------------------------------------------------------------\n");	
	

//         printf("Input the string : ");
//         fgets(str, sizeof str, stdin);

// 	printf("Input the substring to be search : ");
// 	fgets(search, sizeof search, stdin);

// 	while (str[c1]!='\0')
// 		c1++;
//     c1--;

// 	while (search[c2]!='\0')
// 		c2++;
//     c2--;

// 	for(i=0;i<=c1-c2;i++)
// 	{ 
// 		for(j=i;j<i+c2;j++)
// 		{
// 			flg=1;
// 			if (str[j]!=search[j-i])
// 			{
// 				flg=0;
// 			   break;
// 			}
// 		}
// 		if (flg==1)
// 			break;
// 	}
// 	if (flg==1)
// 		printf("The substring exists in the string.\n\n");
// 	else
// 		printf("The substring is not exists in the string. \n\n");
// }

#include<stdio.h>
#include<string.h>

int main(){
    char str[100], newStr[10][10];
    char search[10];
    int i,j=0,k=0;
    printf("Enter a string: ");
    gets(str);
    puts(str);

    for(i=0;i<=strlen(str);i++){
        if(str[i]==' ' || str[i]=='\0'){
            newStr[k][j]='\0';
            k++;  //for next word
            j=0;    //for next word, init index to 0
        }else{
            newStr[k][j]=str[i];
            j++;
        }
    }

    for(i=0;i<k;i++){
        puts(newStr[i]);
    }

    int count=0;
    printf("Enter string to be searched: ");
    gets(search);
    for(i=0;i<k;i++){
        if(strcmp(newStr[i],search)==0){
            count++;
        }
    }
    printf("%d", count);

    return 0;
}