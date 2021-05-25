#include <stdio.h>
#include <stdlib.h>
int main(){
    float media;
    printf("Digite a nota do aluno:  \n");
    scanf("%f", &media);
    if(media >= 7.0){
        printf("Aprovado direto! \n");
    }else{
        if(media >= 4.0)
            printf("Vai fazer sub.  \n");
        else
            printf("Reprovado");
    }
}
