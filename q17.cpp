#include <stdio.h>

int main() {
	int kg;
	int g;
	
	printf("Valor em kg:");
	scanf("%i", &kg);
	
	g = kg * 1000;
	
	printf("Valor em g: %i", g);
	
	return 0;
}