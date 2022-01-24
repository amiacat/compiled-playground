#include <stdio.h>
#include <stdlib.h>

int main(){
    int* numbers[1] = {0};
    char response[2];
    int num;

    printf("Type \"Yes\": "); 
    scanf("%s", &response);

    while(response != "No"){ 
        printf("\nAdd a number to num...");
        
        scanf("%d", &num);
        
        for(num = 0, num < 1, ++num){
            num += numbers[num];
        }

        printf("\nThe actual value of array is %d", numbers);

        printf("\nDo you want to proceed? ");
        scanf("%s", &response);
    } // Dennis Ritchie, voce parece muito estressado
    
    return 0;
}