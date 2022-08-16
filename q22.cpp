#include <stdio.h>

int main() {
	int m;
	int dias;
	int h;
	
	printf("Quantidade de minutos:");
	scanf("%i", &m);
	
	dias = m / 1440;
	h =  m % 1440 / 60;
	m = (m % 1440) % 60;
	
	printf("Esse tempo corresponde a %i dias %i horas e %i minutos", dias, h, m);
	
	return 0;
}