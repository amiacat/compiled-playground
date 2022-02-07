#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int age;
    char name[20];
} human;

int main(){
    human data;

    printf("Type your name: ");
    scanf("%s", data.name);

    printf("Type your age: ");
    scanf("%d", &data.age);

    printf("\nThe value of your age is %d", data.age);
    printf("\nYour name is %s", data.name);
    return 0;
}