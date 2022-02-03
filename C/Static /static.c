#include <stdio.h>

static func();

int main(){
    func();
    
    return 0;
}

static func(){
    int num1;

    printf("Type some number: ");
    scanf("%d", &num1); 

    num1 += 1;
    if(num1%2 == 0){
        printf("Your number is equal!\n");
    }
    return num1;
}