#include <stdio.h>
#include <stdlib.h>
#include "fila_encadeada.h"

void imprime_tudo(FILA_ENC f){
	NODO *aux2=f->INICIO;
	while (!eh_vazia(f)){ //ando na fila ate ultimo elemento.
		printf ("%d ", f->INICIO->inf);
		f->INICIO = f->INICIO->next;
	}
	printf ("\n");
	f->INICIO = aux2; //recupero o inicio da fila perdido.
}

void preenche_fila_int(FILA_ENC f){
	int valor;
	do{
		printf ("digite um numero para fila ou 0 para sair: ");
		scanf ("%d", &valor);
		if (valor==0)break;
			enfileira (f, valor);
	}while(valor!=0);
}
int main (){
	FILA_ENC f;
	cria_fila(&f);
	eh_vazia(f);
	preenche_fila_int(f);
	imprime_tudo(f);
	//printf ("%d", cons(f));

}
