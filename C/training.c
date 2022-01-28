#include <stdio.h>

int main(){
    int array[5] = {10, 20, 30, 40, 50};
    int *ptr = array;
    int num;

    for(num; num < 5; ++num){
        printf("The actual value is %d", *(ptr + 1)); 
    }
    return 0;
}