#include <stdio.h>

int main() {
	float real;
	float desconto;
	
	printf("Valor em R$:");
	scanf("%f", &real);
	
	desconto = real * 0.70;
	
	printf("70 por cento do valor digitado equivale a: %.1f", desconto);
	
	return 0;
} 