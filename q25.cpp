#include <stdio.h>

int main() {
	int dias;
	int meses;
	int anos;
	
	printf("Digite sua idade em dias:");
	scanf("%i", &dias);
	
	anos = dias / 365;
	meses = dias % 365 / 30;
	dias = (dias % 365) % 30;
	
	printf("Você tem %i anos, %i meses e %i dias.", anos, meses, dias);
	
	return 0;
}