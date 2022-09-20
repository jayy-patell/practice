#include<stdio.h>

void toh(int n, char from_stack, char aux_stack, char to_stack){
    if(n>0){
        toh(n-1, from_stack, to_stack, aux_stack);
        printf("Move a disk from %c to %c\n", from_stack, to_stack);
        toh(n-1, aux_stack, from_stack, to_stack);
    }
}

int main(){
    int n;
    printf("Enter num of discs: ");
    scanf("%d", &n);
    toh(n, 'A', 'B', 'C');
    return 0;
}
