#include <stdio.h>

int main() {
	int num;
	int num2;
	int quociente;
	int resto;
	
	printf("Digite o primeiro número:");
	scanf("%i", &num);
	printf("Digite o segundo número:");
	scanf("%i", &num2);
	
	quociente = num / num2;
	resto = num % num2;
	
	printf("O quociente da divisão do 1o número pelo 2o é: %i\n", quociente);
	printf("E o resto é: %i\n", resto);
	
	return 0;
}