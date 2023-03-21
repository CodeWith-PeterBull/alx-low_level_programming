#include<stdlib.h>
#include<time.h>
#include<stdio.h>

int main(void){
    srand(time(NULL));
    int n = rand() % 201 - 100;
    printf("The number %d is ", n);
    if(n>0){
        printf("positive.\n");
    }else if(n<0){
        printf("negative.\n");
    }else{
        printf("zero.\n");
    }
    return 0;
}

