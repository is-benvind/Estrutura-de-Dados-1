#include <stdio.h>

int main() {
	float nota1;
	int peso1;
	float nota2;
	int peso2;
	float nota3;
	int peso3;
	float multiplicacao;
	int soma;
	float media;
	
	printf("Digite o valor da primeira nota:");
	scanf("%f", &nota1);
	
	printf("Digite o peso da primeira nota:");
	scanf("%i", &peso1);
	
	printf("Digite o valor da segunda nota:");
	scanf("%f", &nota2);
	
	printf("Digite o peso da segunda nota:");
	scanf("%i", &peso2);
	
	printf("Digite o valor da terceira nota:");
	scanf("%f", &nota3);
	
	printf("Digite o peso da terceira nota:");
	scanf("%i", &peso3);
	
	multiplicacao = nota1 * peso1 + nota2 * peso2 + nota3 * peso3;
	soma = peso1 + peso2 + peso3;
	media = multiplicacao / soma;
	
	printf("A média ponderada nas notas é: %.2f", media);
	
	return 0;
}