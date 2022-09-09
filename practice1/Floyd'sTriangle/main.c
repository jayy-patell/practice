#include <stdio.h>

int main(){
    
//    //using for loop
//    int i,j,num,k=1;
//    printf("Enter number of rows for Floyd's Triangle: ");
//    scanf("%d", &num);
//    
//    for(i=1;i<=num;i++){
//        for(j=1;j<=i;j++){
//            printf("%d\t", k);
//            k++;
//        }
//        printf("\n");
//    }


//    //using while loop
//    int i,j,k=1,num;
//    printf("Enter number of rows for Floyd's Triangle: ");
//    scanf("%d", &num);
//    
//    i=1;
//    while(i<=num){
//        j=1;
//        while(j<=i){
//            printf("%d\t", k);
//            k++;
//            j++;
//        }
//        printf("\n");
//        i++;
//    }


//    //reverse floyd's triangle
//    int i,j,k,num;
//    printf ("Enter a number to define the rows in Floyd's triangle: \n");  
//    scanf (" %d", & num);
//    
//     // initialize k and define the formula to get the reverse Floyd's triangle number  
//    k = num * ( num + 1) / 2;  
//      
//    // outer loop   
//    for (i = num; i >= 0; i--)  
//    {  
//        // inner loop check the i condition   
//        for (j = 1; j <= i; j++)  
//        {  
//            // print the decremented value of k by 1.  
//            printf (" %d", k--); /* at each iteration the value of k is decrement by 1. */  
//        }  
//        printf ("\n");  
//    }  
    
    
//    //floyd's triangle using stars
//    int num, i, j, k = 1;   
//   
//    printf( " Enter a number to define the rows in Floyd's triangle: \n");  
//    scanf( "%d", &num);  
//    // use nested for loop  
//    // outer for loop define the rows and check rows condition  
//    for (i = 1; i <= num; i++)  
//    {  
//        // inner loop check j should be less than equal to 1 and print the data.  
//        for (j = 1; j <= i; j++)  
//        {  
//            printf(" *"); // print the star  
//              
//        }  
//        printf( "\n");  
//    }     


    //floyd's triangle using alphabets
    int num, i, j, k = 'A';   
   
    printf("Enter a number to define the rows in Floyd's triangle: ");  
    scanf( "%d", &num);  
    // use nested for loop  
    // outer for loop define the rows and check rows condition  
    for (i = 1; i <= num; i++)  
    {  
        // inner loop check j should be less than equal to 1 and print the data.  
        for (j = 1; j <= i; j++)  
        {  
            printf(" %c", k); // print the Alphabets  
            k++;  
        }  
        printf( "\n");  
    }     
    
    return 0;
}
