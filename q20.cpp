#include <stdio.h>

int main() {
	int h;
	int semanas;
	int dias;
	
	printf("Quantidade de horas:");
	scanf("%i", &h);
	
	semanas = h / 168;
	dias = h % 168 / 24;
	h =  (h % 168) % 24;
	
	printf("Esse tempo corresponde a %i semanas %i dias e %i horas", semanas, dias, h);
	
	return 0;
}