#include <stdio.h>

int main() {
	int km;
	int m;
	
	printf("Valor em km:");
	scanf("%i", &km);
	
	m = km * 1000;
	
	printf("Valor em m: %i", m);
	
	return 0;
}