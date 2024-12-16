#include <iostream>
using namespace std;
// escrito por Alberto Alvarez
int main() {
    int matriz1[2][2], matriz2[2][2], resultado[2][2];

    // Solicitar al usuario llenar la primera matriz
    cout << "Ingresa los elementos de la primera matriz de 2x2:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz1[i][j];
        }
    }

    // Solicitar al usuario llenar la segunda matriz
    cout << "Ingresa los elementos de la segunda matriz de 2x2:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz2[i][j];
        }
    }

    // Multiplicaci�n de matrices
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            resultado[i][j] = 0;  // Inicializar el resultado en 0
            for (int k = 0; k < 2; k++) {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];  // Multiplicaci�n y suma
            }
        }
    }

    // Imprimir el resultado de la multiplicaci�n
    cout << "El resultado de la multiplicacion de las dos matrices es:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << resultado[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
