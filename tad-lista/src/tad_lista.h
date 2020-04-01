typedef struct nodo{

	int valor;
	struct nodo* prox;
}Celula;

typedef struct nodo Lista;

void insereIten( Lista** lista, int valor);

void removeIten( Lista* lista, int valor);

void imprime( Lista *lista);

void libera(Lista *lista);
