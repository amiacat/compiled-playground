#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char string[4] = "dad";
    char string_2[5] = "guys";

    printf("Type a value to string: ");
    fgets(string, 4, stdin);
    printf("\nType another value: ");
    fgets(string_2, 5, stdin);

    bool res = strcpr(string, string_2);
    
    if(res == 1){
        printf("It is false");
    }
    return 0;
}