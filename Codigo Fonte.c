#include <stdio.h>
#include <stdio.h>

int main(){
    float num;
    printf("Digite um número: \n");
    sacnf("%f", &num);
    if(num > 10 || num == 0){
        printf("Uma das condições está ok!");
    }
}
