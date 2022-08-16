#include <stdio.h>

int main() {
	int m;
	int cm;
	
	printf("Valor em m:");
	scanf("%i", &m);
	
	cm = m * 100;
	
	printf("Valor em cm: %i", cm);
	
	return 0;
}