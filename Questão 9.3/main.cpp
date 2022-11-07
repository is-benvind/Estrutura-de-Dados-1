#include <stdlib.h>
#include "lista.cpp"

int main() {
    Lista lista;
    lista = include(1, include(2, include(3, NULL)));
    Item ultimoItem = ultimo(lista);
    cout << "Último item: " << ultimoItem << endl;
}