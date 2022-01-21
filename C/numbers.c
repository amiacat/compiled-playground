#include <stdio.h>

int inputs_name(int x, int y);

int main(){
    int x, y;
    int result;

    result = inputs_name(x, y);
    printf("O valor é %d \n", result);
    return 0;
}

int inputs_name(int x, int y){
    x = scanf("%d", &x);
    y = scanf("%d", &y);

    x += y;
    return x;
}