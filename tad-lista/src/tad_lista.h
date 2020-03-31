typedef struct nodo{

	int valor;
	struct nodo* prox;
}Celula;

typedef struct nodo Lista;

void insere( Lista** lista, int valor);

void imprime( Lista *lista);

void libera(Lista *lista);
