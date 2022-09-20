#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct student{
    char name[30];
    int rno;
    float cgpa;
}student;

void read(student sts[], int n){
    for(int i=0;i<n;i++){
        printf("Enter details of student %d", i+1);
        printf("\nName: ");
        scanf("%s", (sts+i)->name);
        printf("Roll number- ");
        scanf("%d", &(sts+i)->rno);
        printf("Cgpa- ");
        scanf("%f", &(sts+i)->cgpa);
    }
}

void display(student sts[], int n){
    for(int i=0;i<n;i++){
        printf("\nName: %s", (sts+i)->name);
        printf("\tRoll number: %d", (sts+i)->rno);
        printf("\tCgpa- %f", (sts+i)->cgpa);
    }
}

void sort(student sts[], int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if((sts+j)->rno > (sts+j+1)->rno){
                int temp=0;
                temp = (sts+j)->rno;
                (sts+j)->rno = (sts+j+1)->rno;
                (sts+j+1)->rno = temp;
            }
        }
    }
}

int main(){
    int i,n;
    printf("Enter number of students: ");
    scanf("%d",&n);
    student* sts = (student*)malloc(n*sizeof(student)); 
    read(sts, n);
    sort(sts, n);
    display(sts,n);
    return 0;
}