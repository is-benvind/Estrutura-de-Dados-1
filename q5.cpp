#include <stdio.h>

int main() {
	int num;
	int inverso;
	
	printf("Digite um número de 3 digítos:");
	scanf("%i", &num);
	
	if(num >= 0) {
		do {
			inverso = num % 10;
			printf("%i", inverso);
			num /= 10;
		} while (num != 0);
		printf("\n");
		
	} else if (num < 1) {
	     num = num * - 1;
	     printf("-");
		 
		 do {
			inverso = num % 10;
			printf("%i", inverso);
			num /= 10;
		} while (num != 0);
		
		printf("\n");	
	}
	return 0;
}