#include <stdio.h>

int main() {
	int m;
	int km;
	
	printf("Valor em m:");
	scanf("%i", &m);
	
	km = m / 1000;
	m = m % 1000;
	
	printf("O valor equivale a %i km e %i m", km, m); 
	
	return 0;
}