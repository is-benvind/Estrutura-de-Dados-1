#include <stdio.h>

int main() {
	int mercadoria;
	int entrada;
	int prestaçoes;
	
	printf("Valor da mercadoria:");
	scanf("%i", &mercadoria);
	
	if (mercadoria % 3 == 0) {
		entrada = mercadoria / 3;
		prestaçoes = entrada;
		printf("Valor da entrada: %i. Valor das duas prestações: %i.", entrada, prestaçoes);
	} else {
		entrada = (mercadoria / 3) + (mercadoria % 3);
		prestaçoes = (mercadoria - entrada) / 2;
		printf("Valor da entrada: %i. Valor das duas prestações: %i.", entrada, prestaçoes);
	}
	
	return 0;
}