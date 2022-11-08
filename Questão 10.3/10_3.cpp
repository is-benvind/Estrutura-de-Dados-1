#include "lista_estatica_ordenada.cpp"
#include <iostream>
using namespace std;

int main(){
    string option = "s";
    int numero;
    Lista listaTeste = NULL;

    while(option == "s"){
        cout << "Digite um número: ";
        cin >> numero;

        insSR(numero, &listaTeste);

        cout << "Deseja inserir outro número? s/n ";
        cin >> option;
    }
    exibe(listaTeste);
}