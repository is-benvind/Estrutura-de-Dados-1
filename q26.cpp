#include <stdio.h>

int main() {
	int anos;
	int cigarros;
	float preço;
	int total_cigarros;
	int total_carteiras;
	float gastos; 
	
	printf("Anos fumando:");
	scanf("%i", &anos);
	
	printf("Número de cigarros fumados por dia:");
	scanf("¨%", &cigarros);
	
	printf("Preço de uma carteira de cigarros:");
	scanf("%f", &preço);
	
	total_cigarros = anos * 365 * cigarros;
	total_carteiras = total_cigarros / 20;
	gastos = total_carteiras * preço;
	
	printf("Dinheiro gasto: %.2f", gastos);
	
	return 0;
}