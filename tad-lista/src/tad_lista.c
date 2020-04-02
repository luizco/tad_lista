#include <stdio.h>
#include <stdlib.h>
#include "tad_lista.h"

void insereIten(Lista **lista, int valor) {

	if ((*lista) == NULL) {
		(*lista) = (Lista*) malloc(sizeof(Lista));
		(*lista)->prox = NULL;
		(*lista)->valor = valor;

	} else {

		Celula *temp, *aux;
		for (aux = (*lista); aux->prox != NULL; aux = aux->prox);

		temp = malloc(sizeof(Celula));
		temp->prox = NULL;
		temp->valor = valor;
		aux->prox = temp;
	}

}

void removeIten(Lista *lista, int valor) {

	Celula *p, *temp;

	if (lista != NULL) {

		for (p = lista; p != NULL && p->prox->valor != valor; p = p->prox)
			;

		temp = p->prox;
		p->prox = p->prox->prox;
		free(temp);
	}
}

void imprime(Lista *lista) {
	Celula *p;

	for (p = lista; p != NULL; p = p->prox) {
		printf("%d \n", p->valor);
	}

}

void libera(Lista **lista) {
	Celula *p, *temp;

	p = (*lista);
	while (p != NULL) {
		temp = p;
		p = p->prox;
		free(temp);
	}

}
