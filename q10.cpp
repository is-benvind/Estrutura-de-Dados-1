#include <stdio.h>

int main() {
	int lado;
	int area;
	
	printf("Lado do quadrado:");
	scanf("%i", &lado);
	
	area = lado * lado;
	
	printf("Área do quadrado: %i", area);
	return 0;
}