#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct human {
    int age;
    char name[20];
};

int main(){
    struct human data;

    printf("Type your name: ");
    fgets(data.age, 20, stdin);
    fflush(stdin);

    printf("Type your age: ");
    scanf("%d", &data.age);

    printf("\nThe value of your age is %d", data.age);
    printf("\nYour name is %s", *(data.name));
    return 0;
}