#include <iostream>
#include <vector>
using namespace std;
// Escrito por Alberto Álvarez
int main() {
    vector<int> numeros(5);  // Vector de 5 elementos

    // Solicitar 5 números al usuario
    cout << "Ingresa 5 números:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Número " << i + 1 << ": ";
        cin >> numeros[i];
    }

    // Imprimir los números en orden inverso
    cout << "Los números en orden inverso son: ";
    for (int i = 4; i >= 0; i--) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}

