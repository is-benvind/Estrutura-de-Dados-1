#include "lista_estatica_ordenada.cpp"
#include <iostream>
using namespace std;

int main(){
    string option = "s";
    int numero;
    Lista listaOrdenada = NULL;

    while(option == "s"){
        cout << "Digite um número: ";
        cin >> numero;

        ins(numero, &listaOrdenada);

        cout << "Deseja inserir outro número? s/n ";
        cin >> option;
    }
    exibe_inv(listaOrdenada);
}