#include <stdio.h>

int main() {
	float raio;
	float volume;
	
	printf("Valor do raio:");
	scanf("%f", &raio);
	
	volume = 4 * 3.14 * (raio * raio * raio) / 3;
	
	printf("Volume da esfera: %.2f", volume);
	
	return 0;
}