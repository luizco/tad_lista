#include <stdio.h>
#include <stdlib.h>
#include "tad_lista.h"

void insereIten(Lista **lista, int valor) {

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

void removeIten( Lista* lista, int valor){

	Celula *p;

	if( lista != NULL){

		p = lista;

		while( p != NULL && p->valor != valor){


			p = p->prox; // avancando para a proxima celula
		}
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
