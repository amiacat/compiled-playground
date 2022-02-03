#include <stdio.h>
#include <stdlib.h>

int main(){
    void *ptr;
    int num;
    char name[5];

    printf("Type something: ");
    scanf("%d", &num);

    printf("Type a string: ");
    fgets(name, 5, stdin);

    ptr = &num;

    printf("\nThe adress of pointer is %x", &ptr);
    printf("\nThe value of pointer is %d", *((int *)ptr));
    return 0;
}