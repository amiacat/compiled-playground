#include <stdio.h>
#include <stdlib.h>

int *pointer(int *a);

int main(){
    int y = 5;
    
    *pointer(&y);
    return 0;
}

int *pointer(int *a){
    printf("The value is %d \n", *(a));
    return a;
}