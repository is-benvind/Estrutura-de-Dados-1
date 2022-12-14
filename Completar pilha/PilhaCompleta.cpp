#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

class No{
	public:
		char nome;
		No *prox;
		No(char n){
			nome = n;
			prox = NULL;
		}
};

class Pilha{
	public:
		No *topo;
		
		Pilha(){
			topo = NULL;
		}
		
		void push(char n){
			No* temp = new No(n);

            temp->nome = n;
            temp->prox = topo;
            topo = temp;
            printf("Item empilhado!\n");
		
		}
		
		char pop(){
			No* temp;

		if(isEmpty()) {
            printf("\nPilha vazia\n");
            exit(1);
		} else {
            temp = topo;
            topo = topo->prox;

            free(temp);
            printf("Item desempilhado\n");
		}
		}
			
		}
		
		int isEmpty(){
            if (topo == NULL) {
                printf("Pilha vazia!\n");
                return true;
            }   else {
                printf("A pilha não está vazia!\n");
                return false;
            }
			
		}
	
	
};

int main(){
	class Pilha pilha;

    //pilha.push('3');
    pilha.pop();

	
}
