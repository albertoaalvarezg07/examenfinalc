#include <iostream>
#include <vector>
using namespace std;
// Escrito por Alberto �lvarez
int main() {
    vector<int> numeros(5);  // Vector de 5 elementos

    // Solicitar 5 n�meros al usuario
    cout << "Ingresa 5 n�meros:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "N�mero " << i + 1 << ": ";
        cin >> numeros[i];
    }

    // Imprimir los n�meros en orden inverso
    cout << "Los n�meros en orden inverso son: ";
    for (int i = 4; i >= 0; i--) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}

