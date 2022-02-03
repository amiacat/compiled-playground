#include <stdio.h>

int main(){
    int counting;

    printf("Type something: ");
    scanf("%d", &counting);

    for(counting; counting < 10; counting++){
        if(counting == 5){
            continue;
        }
        printf("The actual value is: %d \n", counting);
    }
}