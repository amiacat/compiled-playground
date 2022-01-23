#include <stdio.h>
#include <stdlib.h>

int main(){
    int* numbers[1];
    char response[2];
    int num;

    printf("Type \"Yes\": "); 
    scanf("%s", &response);

    while(response != "No"){ 
        printf("\nAdd a number to num...");
        
        scanf("%d", &num);
        num = numbers[1];

        printf("\nThe actual value of array is %d", numbers);

        printf("\nDo you want to proceed? ");
        scanf("%s", &response);

        if(response == "No"){
            break;
        }
    }
    
    return 0;
}