#include <stdio.h>

int main() {
	int meses;
	int anos;
	
	printf("Quantidade de meses:");
	scanf("%i", &meses);
	
	anos = meses / 12;
	meses = meses % 12;
	
	printf("Isso corresponde a %i anos e %i meses.", anos, meses);
	
	return 0;
}