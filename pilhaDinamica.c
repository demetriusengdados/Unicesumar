#include <stdio.h>
#include <stdlib.h>

struct PILHA{
  int num;
  struct PILHA *prox;
};

typedef struct PILHA pilha;

int main(void) {
  pilha *topo = NULL;
  pilha *aux;

  int op;

  do{
    system("clear");
    printf("\nMENU DE OPÇÕES");
    printf("\n1 - Inserir na pilha");
    printf("\n2 - Consultar toda a pilha");
    printf("\n3 - Remover da pilha");
    printf("\n4 - Esvaziar a pilha");
    printf("\n5 - Sair");
    printf("\n\nDigite sua opção: ");
    scanf("%d", &op);

    if (op < 1 || op > 5)
      printf("\nOpção inválida");
    if (op == 1){
      printf("Digite o número a ser inserido na pilha: ");
      pilha *novo = malloc(sizeof(pilha));
      scanf("%d", &novo->num);
      novo->prox = topo;
      topo = novo;
      printf("\nNúmero inserido na pilha.");
    }
    if (op == 2){
      if (topo == NULL){
        printf("\nPilha vazia!");
        getchar();
      }else{
        printf("\nConsultando toda a pilha\n");
        aux = topo;
        while (aux != NULL){
          printf("%d ", aux->num);
          aux = aux->prox;
        }
        getchar();
      }
    }
    if (op == 3){
      if (topo == NULL){
        printf("\nPilha vazia!");
        getchar();
      }else{
        aux = topo;
        printf("\nNúmero %d removido", topo->num);
        topo = topo->prox;
        free(aux);
      }
    }
    if (op == 4){
      if (topo == NULL){
        printf("\nPilha vazia!");
        getchar();
      }else{
        aux = topo;
        while(aux != NULL){
          topo = topo->prox;
          free(aux);
          aux = topo;
        }
        printf("\nPilha esvaziada");
        getchar();
      }
    }
    getchar();
  }while (op != 5);
}