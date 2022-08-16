#include <stdio.h>

int main() {
	float dolar;
	float real;
	
	printf("1 Dólar equivale a 5,11 Reais");
	printf("Digite um valor em US$:");
	
	scanf("%f", &dolar);
	
	real = dolar * 5.11;
	
	printf("O valor em R$ é: %.2f\n", real);
	
	return 0;
}