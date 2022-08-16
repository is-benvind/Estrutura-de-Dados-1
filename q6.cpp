#include <stdio.h>

int main() {
	float salario;
	float aumento;
	float novo_salario;
	
	printf("Valor do salário:");
	scanf("%f", &salario);
	
	aumento = salario * 0.25;
	novo_salario = salario + aumento;
	
	printf("O valor do salário, após um aumento de 25 por cento, é igual a: %.1f\n", novo_salario);
			
	return 0;
}