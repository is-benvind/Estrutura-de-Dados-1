#include <stdio.h>

int main() {
	float custo_f;
	float custo_c;
	float distribuidor;
	float impostos;
	
	printf("Custo de fábrica:");
	scanf("%f", &custo_f);
	
	distribuidor = custo_f * 0.28;
	impostos = custo_f * 0.45;
	custo_c = custo_f + distribuidor + impostos;
	
	printf("Custo ao consumidor: %.3f", custo_c);	
		
	return 0;
}