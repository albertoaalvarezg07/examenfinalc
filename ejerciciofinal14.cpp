#include <iostream>
using namespace std;
// escrito por Alberto Álvarez
int main() {
    int matriz[2][2];  // Declaración de la matriz de 2x2
    int suma = 0;

    // Solicitar al usuario llenar la matriz
    cout << "Ingresa los elementos de la matriz de 2x2:" << endl;

    // Llenar la matriz con los valores ingresados por el usuario
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    // Calcular la suma de los elementos de la matriz
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            suma += matriz[i][j];
        }
    }

    // Imprimir la suma total
    cout << "La suma de los elementos de la matriz es: " << suma << endl;

    return 0;
}
