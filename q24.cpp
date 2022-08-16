#include <stdio.h>

int main() {
	int anos;
	int meses;
	int dias;
	
	printf("Abaixo, expresse sua idade em anos, meses e dias.");
	printf("Anos:");
	scanf("%i", &anos);
	printf("Meses:");
	scanf("%i", &meses);
	printf("Dias:");
	scanf("%i", &dias);
	
	dias = (anos * 365) + (meses * 30) + dias;
	
	printf("Sua idade em dias é: %i", dias);
		
	return 0;
}