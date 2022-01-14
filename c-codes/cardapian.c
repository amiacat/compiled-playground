#include <stdio.h>

int main(){
    int choose;
    int amount;

    printf("Before, choose an amount: ");
    scanf("%d", &amount);

    printf("\nThe foods: \n");
    for(int i; i<=5; i++){
        printf("Food\n");
    }

    printf("Which food will you choose: ", );
    scanf("%d", &choose);

    if(choose > 5){
        printf("É inválido!\n");
    }
    else {
        amount -= 1;
        printf("Voce pegou a comida\n");
    }
    return 0;
}