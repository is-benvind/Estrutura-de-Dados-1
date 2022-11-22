#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;

void intercala(int vetor[], int inicio, int meio, int fim){
	int *aux = (int*)malloc((fim-inicio+1)*sizeof(int));
	if(aux==NULL) abort();
	
	int i = inicio, j = meio + 1, k = 0;
	
	while (i <= meio && j<=fim){
		if(vetor[i]<vetor[j] aux[k++]=vetor[i++]);
		else aux[k++]=vetor[j++];
	} 
	
	while(i<=meio) aux[k++]=vetor[i++];
	while(j<=fim) aux[k++]=vetor[j++];
	
	for(k=0;k<=fim - inicio; k++){
		vetor[inicio+k] = aux[k];
	}
	free(aux);
}
void merge_sort(int v[],int inicio, int fim){
	if(inicio==fim) return;
	int meio = (inicio+fim) /  2;
	merge_sort(v, inicio, meio);
	merge_sort(v, meio+1, fim);
	intercala(v, inicio, meio, fim);
}

int main(){
   int vetor[] = {7, 9, 4, 3, 6, 1};
   int i;   
   
   merge_sort(vetor, 0,6);

   printf("\n2.Vetor ordenado:\n");
   for(i = 0; i <= 5; i++){
      printf("%d ", vetor[i]);
   }
   printf("\n");   
}