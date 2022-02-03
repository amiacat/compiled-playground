#include <stdio.h>

int main(){
    const int array[] = {10, 20, 30, 40, 50};
    const int *ptr = array;
    char c;

    for(c = 0; c < sizeof(array)/sizeof(int); c++){
        printf("The actual value is %d \n", *(ptr++)); 
    }
    return 0;
}