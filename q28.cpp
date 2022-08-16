#include <stdio.h>

int main() {
	float kg;
	float cobre;
	float zinco;
	
	printf("Quantidade de Latão em kg:");
	scanf("%f", &kg);
	
	cobre = kg * 0.70;
    zinco = kg * 0.30;
    
    printf("Para essa quantidade de Latão, é necessário %.1f kg de Cobre e %.1f kg de Zinco", cobre, zinco);
    
	return 0;
}