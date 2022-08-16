#include <stdio.h>

int main() {
	float fahrenheit;
	float celsius;
	
	printf("Temperatura em graus Fahrenheit:");
	scanf("%f", &fahrenheit);
	
	celsius = (5 * fahrenheit - 160) / 9;
	
	printf("Temperatura em graus Celsius: %.2f", celsius);
	
	return 0;
}