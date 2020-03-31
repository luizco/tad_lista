#include <stdio.h>
#include <stdlib.h>
#include "tad.h"

void insere(Lista **lista, int valor) {

	if ((*lista) == NULL) {
		(*lista) = (Lista*) malloc(sizeof(Lista));
		(*lista)->prox = NULL;
		(*lista)->valor = valor;

	} else {
		Celula *temp;
		temp = malloc(sizeof(Celula));
		temp->valor = valor;
		temp->prox = (*lista)->prox;
		(*lista)->prox = temp;

	}

}

void imprime(Lista *lista) {
	Celula *p;

	for (p = lista; p != NULL; p = p->prox) {
		printf("%d ", p->valor);
	}

}

void libera(Lista *lista) {
	Celula *p, *temp;

	for (p = lista; p != NULL; p = p->prox) {
		temp = p;
		p = p ->prox;
		free(temp);

	}

}
