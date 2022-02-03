#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char container[20];
    char fox[4];
    char red[4];
    int num = 1;
    char *nums[2];

    strcpy(container,"Red fox");
    sscanf(container,"%s %s", red, fox);
    printf("It is a %s %s \n", red, fox);

    sprintf(*nums,"%ls", &num);
    printf("\n %s", *(nums));
    return 0;
}