#include <stdio.h>
#include <stdlib.h>
#include "fila_encadeada.h"
#include "pilha_sequencial.h"

void inverte_fila (FILA_ENC *f){
	PILHA pi;

	//descobrir o tamanho da fila (exercicio)
	//verificar se existe elementos na fila
	//verificar se a pilha esta vazia


push(&pi, remove_elemento(f));


//	while(p.topo != -1){
//		insere_elemento(f, pop(&p));
//	}

}

int main(){
	FILA_ENC f;

	cria_fila(&f);

	insere_elemento(&f, 10);
	insere_elemento(&f, 20);
	insere_elemento(&f, 30);
	insere_elemento(&f, 40);
	insere_elemento(&f, 50);

	inverte_fila(&f);

	imprime_fila(f);

	return 0;
}



