#include <stdio.h>
#include <stdlib.h>
#include "tad_lista.h"

int main(void) {

	Lista* lista = NULL;

	insere(&lista,2);
	insere(&lista,4);
	insere(&lista,8);
	insere(&lista,9);

	imprime(lista);
	libera(lista);

}
