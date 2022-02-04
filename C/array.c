#include <stdio.h>

int main(){
    struct array {
        int num;
        char clang;
        float numf;
    };

    struct array call;

    call.num = 50;
    printf("The value of struct is %d \n", call.num);
    return 0;
}