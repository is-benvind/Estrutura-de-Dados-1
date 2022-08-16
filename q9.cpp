#include <stdio.h>

int main() {
	int base;
	int altura;
	int area;
	
	printf("Digite o valor da base:");
	scanf("%i", &base);
	
	printf("Digite o valor da altura:");
	scanf("%i", &altura);
	
	area = (base * altura) / 2;
	
	printf("Valor da área: %i", area);
	
	return 0;
}