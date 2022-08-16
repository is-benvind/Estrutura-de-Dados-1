#include <stdio.h>

int main() {
	int ms;
	int kmh;
	
	printf("Digite o valor da velocidade em m/s:");
	scanf("%i", &ms);
	
	kmh = ms * 3.6;
	
	printf("A velocidade em km/h é = %i\n", kmh);
	
	return 0;
}