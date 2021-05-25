/* insere o conteúdo do arquivo stdio.h */
#include <stdio.h>
int main()
 /* declaração das variáveis */
{
int  idade, ano;
float altura;
char nome[30];
/*entrada de dados */
/*mensagem ao usuário */
printf ("Digite o seu nome: ");
scanf ("%s", nome); /* leitura do nome */
/*mensagem ao usuário */
printf ("Digite a idade: ");
scanf ("%d", &idade); /* leitura da idade */
/*mensagem ao usuário */
printf ("Digite a altura: ");
scanf ("%f", &altura); /* leitura da altura*/
/* processamento */
/*cálculo do ano de nascimento */
ano = 2021 - idade;
/*saída de dados */
printf ("\nO nome e: %s", nome);
printf ("\nA altura e: %f", altura);
printf ("\nA idade e: %d", idade);
printf ("\nO ano de nascimento e: %d ", ano);
return (0);
}
