#include <stdio.h>

int main()
{
     int i, j, total;
     total = 0;

     for(i = 0; i < 10; i=i+2){
          for(j = 5; j < 10; j++){
              total = total + 1;
          }
     }

      printf("Valor de i: %d - Valor de j: %d - Valor total: %d\n", i,j,total);
}
