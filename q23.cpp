#include <stdio.h>

int main() {
	float num;
	float num2;
	float num3;
	float media;
	
	printf("Digite o primeiro número:");
	scanf("%f", &num);
	
	printf("Digite o segundo número:");
	scanf("%f", &num2);
	
	printf("Digite o terceiro número:");
	scanf("%f", &num3);
	
	media = (num + num2 + num3) / 3;
	
	printf("A média dos números é: %.2f", media);
	
}