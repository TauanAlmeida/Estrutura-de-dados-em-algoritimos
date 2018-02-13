#include <stdio.h>
#include <stdlib.h>
#define MAX 100
#include "fila.h"

void imprime_tudo(FILA_SEQ f){
	int i;
	if (eh_vazia(&f)){
	printf ("\nERRO! Consulta na fila vazia.\n");
	exit (2);
	}
	for(i= f.val[0];i<=f.val[1];i++){
		printf("%d ", f.val[i]);
	}
	printf ("\n");
}

int main (){
	FILA_SEQ f;

cria_fila(&f);
enfileira (&f, 9);
enfileira (&f, 1);
enfileira (&f, 2);
enfileira (&f, 1);
	while(!eh_vazia(&f)){
		printf ("\nFila Atual: ");
		imprime_tudo(f);
		desenfileira(&f);	
	}
}





