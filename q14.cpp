#include <stdio.h>

int main() {
	float celsius;
	float fahrenheit;
	
	printf("Temperatura em graus Celsius:");
	scanf("%f", &celsius);
	
	fahrenheit = (9 * celsius + 160) / 5;
	
	printf("Temperatura em graus Fahrenheit: %.2f", fahrenheit);
	
	return 0;
}