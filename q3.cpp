#include <stdio.h>

int main() {
	int kmh;
	int ms;
	
	printf("Digite o valor da velocidade em km/h:");
	scanf("%i", &kmh);
	
	ms = kmh / 3.6;
	
	printf("A velocidade em m/s é = %i\n", ms);
	
	return 0;
}