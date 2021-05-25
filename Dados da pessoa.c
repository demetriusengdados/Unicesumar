/* Insere o conteúdo do arquivo stdio.h */
#include <stdio.h>
int main()
{   /* declaração das variaveis */
    int idade, ano;
    float altura;
    char nome[30];
    /*entrada dos dados*/
    /*mensagem do usuário*/
    printf("Digite o seu nome: ");
    scanf("%s", &nome); /*Leitura de nome*/
    /*mensagem do usuario*/
    printf("Digite a sua idade: ");
    scanf("%d", &idade); /*Leitura de idade*/
    printf("Digite a altura: ");
    scanf("%f", &altura); /*leitura de altura*/
    /*processamento*/
    /*calculo do ano de nascimento*/
    ano = 2021 - idade;
    /*saida de dados*/
    printf("\n O nome é: %s", nome);
    printf("\n A altura é: %f", altura);
    printf("\n A idade é: %d", idade);
    printf("\n O ano de nascimento é: %d", ano);
    return(0);
}
