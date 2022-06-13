#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int op;

#define tamanho 5

struct tpilha{
  int dados[tamanho];
  int ini;
  int fim;
};

struct tpilha pilha;

void pilha_entrar();
void pilha_sair();
void pilha_mostrar();
void menu_mostrar();

int main(){
    setlocale(LC_ALL, "Portuguese");
    op = 1;
    pilha.ini = 0;
    pilha.fim = 0;
    while (op != 0) {
        system("clear");
        pilha_mostrar();
        menu_mostrar();
        scanf("%d", &op);
        switch (op) {
            case 1:
                pilha_entrar();
                break;
            case 2:
                pilha_sair();
                break;
        }
    }
    return(0);
}

void pilha_entrar(){
    if (pilha.fim == tamanho){
      printf("\nA pilha está cheia");
      getchar();
    }else{
      scanf("%d", &pilha.dados[pilha.fim]);
      pilha.fim++;
    }
}

void pilha_sair() {
  if (pilha.ini == pilha.fim){
    printf("\nA pilha está vazia!");
    getchar();
  }else{
    pilha.dados[pilha.fim-1] = 0;
    pilha.fim--;
  }
    
}

void pilha_mostrar() {
  printf("\n[ ");
  for (int i = 0; i < tamanho; i++){
    printf("%d ",pilha.dados[i]);
  }   
  printf(" ]\n");
}

void menu_mostrar() {
    printf("\nEscolha uma opção:\n");
    printf("1 - Empilhar\n");
    printf("2 - Desempilhar\n");
    printf("0 - Sair\n\n");
}