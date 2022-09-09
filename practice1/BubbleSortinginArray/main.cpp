#include <stdio.h>

int main() {
    int array[100];
    int i, j, num, temp;
    char ch;
 
    printf("Enter the number of elements: ");
    scanf("%d", &num);
    
    printf("Enter the elements of arra: ");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Input array is \n");
    for (i = 0; i < num; i++)
    {
        printf("%d\n", array[i]);
    }
    
    printf("Enter d for descending order and a for ascending order: ");
    scanf(" %c", &ch);   //leave a space.
    
    switch(ch){
        case 97:{
            for (i = 0; i < num; i++)
            {
                for (j = 0; j < (num - i - 1); j++)     //whatif j is till num?? 
                {
                    if (array[j] > array[j + 1])
                    {
                        temp = array[j];
                        array[j] = array[j + 1];
                        array[j + 1] = temp;
                    }
                }
            }
            printf("Sorted array is...\n");
            for (i = 0; i < num; i++)
            {
                printf("%d\n", array[i]);
            }
            break;
        }
        
        case 100:{
            for (i = 0; i < num; i++)
            {
                for (j = 0; j < (num - i - 1); j++)
                {
                    if (array[j] < array[j + 1])
                    {
                        temp = array[j];
                        array[j] = array[j + 1];
                        array[j + 1] = temp;
                    }
                }
            }
            printf("Sorted array is...\n");
            for (i = 0; i < num; i++)
            {
                printf("%d\n", array[i]);
            }
            break;
        }
        
        default: printf("Something Fishy..");
    }
    
    return 0;
}




//#include<stdio.h>
//#include<string.h>
//
//int main(){
//    char string[30][30], temp[30];
//    int no,i,j;
//    printf("Enter number of strings: ");
//    scanf("%d", &no);
//    printf("\nEnter strings: ");
//    for(i=0;i<no+1;i++){                 //string[0] doesnt exist.
//        gets(string[i]);
//    }
//    
////    for(i=0;i<no+1;i++) {
////        for(j=0;j<no-i;j++){
////            if(strcmp(string[j],string[j+1])>0){
////                strcpy(temp,string[j]);
////                strcpy(string[j],string[j+1]);
////                strcpy(string[j+1],temp);
////            }
////        }
////    }
//    for(i=0;i<no-1;i++) {
//        for(j=i+1;j<no;j++){
//            if(strcmp(string[i],string[j])>0){
//                strcpy(temp,string[i]);
//                strcpy(string[i],string[j]);
//                strcpy(string[j],temp);
//            }
//        }
//    }
//    
//    printf("The sorted array is: ");
//    for(i=0;i<no+1;i++){
//        puts(string[i]);
//    }
//        
//    
//    return 0;
//}


