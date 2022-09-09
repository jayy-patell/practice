#include <stdio.h>
#include <stdlib.h>
#include <conio.h> 

int main(){
    int mag[10][10], i,j,row,col,rowsum[10],colsum[10];
    int pd=0,sd=0,k,x=0,b[100];
    printf("Enter dimensions of matrix: ");
    scanf("%d%d", &row,&col);
    if(row!=col){
        printf("Matrix is not square.");
        exit(0);
    }
    
    //inputting elements to array
    printf("\nEnter elements for magic square: ");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            scanf("%d", &mag[i][j]);
        }
    }
    //copying elements to array
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            b[x++]=mag[i][j];
        }
    }
    
    //checking for uniqueness
    for(k=0;k<x-1;k++){
        for(j=k+1;j<x;j++){
            if(b[k]==b[j]){
                printf("Elements are not unique\nThe matrix is not magic.");
                exit(0);
            }
        }
    }
    
    //Sum of primary diagnoal elements
    for(i=0;i<row;i++){
        pd=pd+mag[i][i];
    }
    
    //checking for rowsum
    for(i=0;i<row;i++){
        rowsum[i]=0;
        for(j=0;j<col;j++){
            rowsum[i]+=mag[i][j];
        }
        if(pd!=rowsum[i]){
            printf("Matrix is not magic.");
            exit(0);
        }
    }
    
    //checking for colsum
    for(i=0;i<col;i++){
        colsum[i]=0;
        for(j=0;j<row;j++){
            colsum[i]+=mag[j][i];
        }
        if(pd!=colsum[i]){
            printf("Matrix is not magic.");
            exit(0);
        }
    }
    
    //finding secondary diangonal sum
    i=row-1;
    k=i;
    for(j=col-1;j>=0;j++){
        sd=sd+mag[i][k-j];
    }
    if(sd!=pd){
        printf("Matrix is not magic.");
        exit(0);
    }
    
    printf("Matrix is magic.");
}
