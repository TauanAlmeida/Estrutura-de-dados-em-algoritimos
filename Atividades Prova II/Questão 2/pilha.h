#define MAX 10

typedef struct{
	int topo;
	int val[MAX];
}PILHA;

void cria_pilha(PILHA *p){
	p->topo = -1;
}

int eh_vazia(PILHA p){
	if(p.topo == -1)
		return 1;
	else
		return 0;
}

void push(PILHA *p, int v){
	if(p->topo == MAX-1)
	{
		printf("Estouro de pilha\n");
		exit(1);
	}

	p->topo++;
	p->val[p->topo] = v;

}

int pop(PILHA *p){
	int x;
	if(eh_vazia(*p))
	{
		printf("Pop em pilha vazia\n");
		exit(2);
	}

	x = p->val[p->topo];

	p->topo--;

	return x;

}

