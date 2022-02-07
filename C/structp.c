#include <stdio.h>
#include <stdlib.h>

typedef struct {
    float nota;
    char name[20]
} student;

void MyStudent(student *data){
    data->nota;
    *data->name;
    printf("My student: \n");
    for(int i = 0; i < 2; i++){
        printf("%d \n", data[i]);
    }
}

int main(){
    student datac = {7.5, "Otto von Catten"};
    
    MyStudent(&datac);
    return 0;
}