typedef struct nodo
{
int inf;
struct nodo * next;
}NODO;
typedef struct
{
NODO *INICIO;
NODO *FIM;
}DESCRITOR;

typedef DESCRITOR * FILA_ENC;
void cria_fila (FILA_ENC *);
int eh_vazia (FILA_ENC);
void enfileira (FILA_ENC, int);
int cons (FILA_ENC);
void desenfileira (FILA_ENC);
int cons_ret (FILA_ENC);

void cria_fila (FILA_ENC *pf){
*pf=(DESCRITOR *)malloc(sizeof(DESCRITOR));
	if (!*pf){
	printf ("\nERRO! Memoria insuficiente!\n");
	exit (1);
	}
(*pf)->INICIO=(*pf)->FIM=NULL;
}

int eh_vazia (FILA_ENC f){
return (f->INICIO == NULL);
}

void enfileira (FILA_ENC f, int v){
NODO *novo;
novo = (NODO *) malloc (sizeof(NODO));
if (!novo){
	printf ("\nERRO! Memoria insuficiente!\n");
	exit (1);
}
novo->inf = v;
novo->next = NULL;
	if (eh_vazia(f))
		f->INICIO=novo;
	else
		f->FIM->next=novo;
		f->FIM=novo; 
}

int cons (FILA_ENC f){
	if (eh_vazia(f)){
		printf ("\nERRO! Consulta em fila vazia!\n");
		exit (2);
	}else
	return (f->INICIO->inf);
}

void desenfileira (FILA_ENC f){
	if (eh_vazia(f)){
		printf ("\nERRO! Retirada em fila vazia!\n");
		exit (3);
	}else{
		NODO *aux=f->INICIO;
	
	f->INICIO=f->INICIO->next;
	if (!f->INICIO)
		f->FIM=NULL;
		free (aux);
	} 
}


