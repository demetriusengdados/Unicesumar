#include <stdio.h>
#include <stdlib.h>

#define tamanho 3

struct tipo_pilha{
	int dados[tamanho];
	int ini;
	int topo;
};

struct tipo_pilha pilha;
