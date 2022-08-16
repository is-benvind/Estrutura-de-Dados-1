#include <stdio.h>

int main() {
	float raio;
	float circunferencia;
	
	printf("Valor do raio:");
	scanf("%f", &raio);
	
	circunferencia = 2 * 3.14 * raio;
	
	printf("Valor da circunferência: %.2f", circunferencia);
	
	return 0;
}