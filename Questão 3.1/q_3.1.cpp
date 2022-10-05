#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "pilha.h"

char *posfixa(char *e) {
    static char s[256];
    int j = 0;
    Pilha P = pilha(256);

    for (int i = 0; e[i]; i++) {

        if (isdigit(e[i])) {
            s[j++] = e[i];
        }

        if (strchr("+*-/", e[i])) {
            push(e[i], P);
        }

        if (e[i] == ')') {
            s[j++] = pop(P);
        }

    }

    s[j] = '\0';
    destroy(&P);

    return s;
}

int main()
{
    Pilha P = pilha(256);

    int num1, num1a, num2, num2a;
    float resultado;
    char e[256];

    printf("Infixa? ");
    gets(e);

    char *exp_pos = posfixa(e);
    printf("Forma da Expressao Posfixa = %s\n", exp_pos);

    for(int i = 0; exp_pos[i]; i++) {

        if(isdigit(exp_pos[i])) {
            num1 = exp_pos[i];
            num1a = num1 - '0';

            push(num1a, P);
        }

        if (strchr("+*-/", exp_pos[i])) {
            num1 = pop(P);
            num2 = pop(P);

            if(exp_pos[i] == '+') {
                resultado = num1 + num2;
                push(resultado, P);
            }

            if(exp_pos[i] == '-') {
                resultado = num1 - num2;
                push(resultado, P);
            }

            if(exp_pos[i] == '*') {
                resultado = num1 * num2;
                push(resultado, P);
            }

            if(exp_pos[i] == '/') {
                resultado = num2 / num1;
                push(resultado, P);
            }
        }

    }

   printf("Resultado da Expressao = %d", getTop(P));

    return 0;
}