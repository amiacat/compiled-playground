#include <stdio.h>
#include <stdlib.h>

int main(){
    void *ptr;
    int num;
    char name[10];

    printf("Type something: ");
    scanf("%d", &num);

    printf()
    fgets(name, 10, stdin);

    ptr = &num;

    printf("\nThe adress of pointer is %x", &ptr);
    printf("\nThe value of pointer is %d", *((int *)ptr));
    return 0;
}