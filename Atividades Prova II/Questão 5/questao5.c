#include <stdio.h>
#include <stdlib.h>
#include "fila_encadeada.h"

void condicoes_fila(FILA_ENC f){
	int valor;
	if (eh_vazia(f)){ //garante que não alterará a fila ja preenchida.
		do{
			printf ("Digite um valor para a fila ou 0 para sair: ");
			scanf ("%d", &valor);
		if(valor==0)break;
			enfileira(f, valor);
		}while(valor != 0);
		printf ("Pronto! Fila Preenchida.\n");
	}else{
		printf ("Ops! Esta ja esta preenchida.\n");
	}
}

int main (){
	FILA_ENC f;
	cria_fila(&f);
	eh_vazia(f);
	condicoes_fila(f);
	condicoes_fila(f); // chama 2x funcao para teste.
	while (!eh_vazia(f)){ //processo para esvaziar fila e leitura do primeiro elemento da fila.
		printf ("%d ",cons(f));
		desenfileira(f);
	}
}
