#include<stdio.h>

int main(void) {
    char name[10];
    
    printf("What is your name? : \n");

    scanf("%9s", name);

    printf("Hello, %s\n", name);

    return 0;
}