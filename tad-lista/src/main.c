#include <stdio.h>
#include "tad_lista.h"

int main() {

	Lista* lista = NULL;

	insereIten(&lista,2);
	insereIten(&lista,4);
	insereIten(&lista,3);
	insereIten(&lista,18);
	removeIten(lista,3);
	imprime(lista);
	insereIten(&lista,3);

	imprime(lista);

	libera(&lista);

}
