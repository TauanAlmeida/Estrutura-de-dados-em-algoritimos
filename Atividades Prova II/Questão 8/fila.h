typedef struct{
int N; /*número de elementos*/
int val[MAX]; /*vetor de elementos*/
/*INICIO = VAL[0]
  FIM = VAL[99]*/
}FILA_SEQ;

void cria_fila (FILA_SEQ *);
int eh_vazia (FILA_SEQ *);
void enfileira (FILA_SEQ *, int);
int cons (FILA_SEQ *);
void desenfileira (FILA_SEQ *);


void cria_fila (FILA_SEQ *f){
f->N = 0;
f->val[0] = 2; 
f->val[1] = 1;
}

int eh_vazia (FILA_SEQ *f){
return (!f->N);
}

void enfileira (FILA_SEQ *f, int v){
if (f->N == MAX){
	printf ("\nERRO! Estouro na fila.\n");
	exit (1);
}

	f->val[1] = ++f->val[1] % MAX;
	f->val[f->val[1]]=v;
	f->N++;
}

int cons (FILA_SEQ *f){
if (eh_vazia(f)){
	printf ("\nERRO! Consulta na fila vazia.\n");
	exit (2);
}else
return (f->val[0]);
}

void desenfileira (FILA_SEQ *f){
if (eh_vazia(f)){
	printf ("\nERRO! Retirada na fila vazia.\n");
	exit (3);
}else{
	f->val[0]= ++f->val[0] % MAX;
	f->N--;
}
}



