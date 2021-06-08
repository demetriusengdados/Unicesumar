#include <stdio.h>

int main()
{
     float num1, num2, resultado;
     int op;
     printf("Digite o primeiro número:\n");
     scanf("%f", &num1);
     printf("Digite o segundo número:\n");
     scanf("%f", &num2);
     printf("Escolha a operação: \n 1 - Soma \n 2 - Subtração \n 3 - Multiplicação \n 4 - Divisão\n");
     scanf("%d", &op);

     switch(op){
          case 1 : {
              resultado = num1 + num2;
              printf("A soma é: %.3f\n", resultado);
           }
           case 2 : {
              resultado = num1 - num2;
              printf("A subtração é: %.3f\n", resultado);
           }
          case 3 : {
              resultado = num1 * num2;
              printf("A multiplicação é: %.3f\n", resultado);
          }
         case 4 : {
              resultado = num1 / num2;
              printf("A divisão é: %.3f\n", resultado);
         }
         default : {
               printf("Operação nao identificada!\n");
         }
   }
   return (0);
}
