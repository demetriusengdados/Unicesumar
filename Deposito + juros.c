#include <stdio.h>

int main()

{
    float deposito, taxa, rendimento, total;

    printf("Informe o valor do deposito:");
    scanf("%f", &deposito);
    printf("\nInforme a taxa de juros:");
    scanf("%f", &taxa);
    rendimento = deposito * (taxa / 100);
    total = deposito + rendimento;
    printf("\n O rendimento é: %.2f", rendimento);
    printf("\n O total é: %.2f", total);
    return(0);
}
