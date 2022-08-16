#include <stdio.h>

int main() {
	int base;
	int altura;
	int area;
	
	printf("Base do retângulo:");
	scanf("%i", &base);
	
	printf("Altura do retângulo:");
	scanf("%i", &altura);
	
	area = base * altura;
	
	printf("Área do retângulo: %i", area);
	
	return 0;
}