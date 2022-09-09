#include<stdio.h>
#include<string.h>

int main(){
    char arr[30][30], temp[30], minStr[30];
    int n,i=0,j,min_idx=0;
    
    printf("Enter no. of strings: ");
    scanf("%d", &n);
    printf("\nEnter the array: \n");
    fflush(stdin);
    for(i=0;i<n;i++){
        gets(arr[i]);
    }
    
    //Moving boundary of unsorted elements
    for(i=0;i<n-1;i++){
        min_idx=i;
        //Find minimum element in unsorted array
        strcpy(minStr,arr[i]);
        for(j=i+1;j<n;j++){
            if(strcmp(minStr,arr[j])>0){
                strcpy(minStr,arr[j]);
                min_idx=j;
            }
        }
        if(min_idx!=i){
            strcpy(temp,arr[i]);
            strcpy(arr[i],arr[min_idx]);
            strcpy(arr[min_idx],temp);
        }
    }
    
    printf("\nSorted array is: \n");
    for(i=0;i<n;i++){
        puts(arr[i]);
    }
    
    return 0;
}
