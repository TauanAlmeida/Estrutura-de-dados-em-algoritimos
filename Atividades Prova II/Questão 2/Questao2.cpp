#include <stdlib.h>
#include <stdio.h>
#include "pilha.h"

PILHA fator_primo(int n){
	PILHA p;
	int i;
	cria_pilha(&p);
	for (i=2;i<=n;){
		if (n % i == 0){
			n = n / i;
			push(&p, i);
		}else{
			i++;
		}
	}
	return p;
}


int main (){
	PILHA p;
	p = fator_primo(100);
	while (!eh_vazia(p)){
		printf ("%d \n", pop(&p));
	}
	
}

