#include <stdio.h>
#include <stdlib.h>
#define MAX 5
#include "fila.h"
#include "pilha.h"

void inverte_fila(FILA_ENC *f){
	PILHA_ENC p;
	cria_pilha (&p);
	if (fila_vazia((*f))){
		printf ("Prencha a Fila antes de inverter!\n");
		exit(0);
	}
	while((*f)->INICIO != NULL){
		empilha (&p, (*f)->INICIO->inf);
		desenfileira(&(*f));
	}
	
	while(!eh_vazia(p)){
		enfileira(&(*f),top(p));
		desempilha(&p);
	}

}

int main (){
	FILA_ENC f;
cria_fila(&f);
enfileira(&f, 1);
enfileira(&f, 2);
enfileira(&f, 3);
enfileira(&f, 4);
enfileira(&f, 5);
inverte_fila(&f);
printf ("Fila Invertida!\n");
imprime_fila(f);

}





