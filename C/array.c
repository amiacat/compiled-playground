#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    int x = 2;
    float y = 5.2;

    void *arr[2] = {&x, &y};

    printf("The array is %p", arr);
    
    return 0;
}