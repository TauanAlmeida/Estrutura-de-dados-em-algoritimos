typedef struct nodo{
int inf;
struct nodo * next;
}NODO;

typedef NODO * PILHA_ENC;
void cria_pilha (PILHA_ENC *);
int eh_vazia (PILHA_ENC);
void empilha (PILHA_ENC *, int);
int top (PILHA_ENC);
void pop (PILHA_ENC *);

void cria_pilha (PILHA_ENC *pp){
*pp=NULL;
}

int eh_vazia (PILHA_ENC p){
return (!p);
}

void empilha (PILHA_ENC *pp, int v){
NODO *novo;
novo = (NODO *) malloc (sizeof(NODO));
if (!novo){
printf ("\nERRO! Memoria insuficiente!\n");
exit (1);
}
novo->inf = v;
novo->next = *pp;
*pp=novo;
}

int top (PILHA_ENC p){
if (eh_vazia(p)){
printf ("\nERRO! Consulta em pilha vazia!\n");
exit (2);
}else
return (p->inf);
}

void desempilha (PILHA_ENC *pp){
if (eh_vazia(*pp)){
printf ("\nERRO! Retirada em pilha vazia!\n");
exit (3);
}else{
NODO *aux=*pp;
*pp=(*pp)->next;
free (aux);
}
}
