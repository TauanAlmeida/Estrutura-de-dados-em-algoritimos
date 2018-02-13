
typedef struct no{
	/* data */
	int inf;
	struct no * next;
}NO;

typedef struct{
	NO * INICIO;
	NO * FIM;
}DESCRITOR;

typedef DESCRITOR * FILA_ENC;

void cria_fila(FILA_ENC *f){
	*f = (DESCRITOR *)malloc(sizeof(DESCRITOR));
	if (f == NULL){
		printf ("Erro na alocação da memoria!\n");
		exit (1);
	}
	(*f)->INICIO = (*f)->FIM = NULL;
}

int fila_vazia(FILA_ENC f){
	if(f->INICIO==NULL)
		return 1;
	else
		return 0;	
}

void enfileira(FILA_ENC *f, int valor){
	NO *novo;
	novo = (NO*)malloc(sizeof(NO));
	if (novo == NULL){
		printf ("Errou na alocacao da memoria!\n");
		exit(0);
	}
	novo->inf = valor;
	novo->next = NULL;
	if(fila_vazia(*f)){
		(*f)->INICIO = (*f)->FIM = novo;
	}else{
		(*f)->FIM->next = novo;
		(*f)->FIM = novo;
	}
}

int desenfileira(FILA_ENC *f){
	int valor;
	valor = (*f)->INICIO->inf;
	NO * aux;
	aux = (*f)->INICIO;
	(*f)->INICIO = (*f)->INICIO->next;
	if(!(*f)->INICIO)
		(*f)->FIM = NULL;
	free(aux);

	return valor;

}

void imprime_fila(FILA_ENC f){
	while(f->INICIO!=NULL)
	{
		printf("%d ", (*f)->INICIO->inf);
		(*f)->INICIO = (*f)->INICIO->next;
	}
	printf("\n");
}


