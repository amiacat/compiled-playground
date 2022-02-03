#include <stdio.h>

int inputs_name(int x, int y);

int main(){
    int x, y;

    inputs_name(x, y);
    return 0;
}

int inputs_name(int x, int y){
    int res;
    
    x = scanf("%d", &x);
    y = scanf("%d", &y);

    res = x + y;

    printf("O valor é %d \n", res);
    return res;
}