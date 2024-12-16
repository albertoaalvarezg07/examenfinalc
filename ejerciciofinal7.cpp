#include <iostream>
using namespace std;
// escrito por Alberto Álvarez
int main() {
    int numero;

    // Solicitar un numero al usuario
    cout << "Ingrese un numero: ";
    cin >> numero;

    // Verificar si el numero es positivo, negativo o cero
    if (numero > 0) {
        cout << "El numero es positivo." << endl;
    } else if (numero < 0) {
        cout << "El numero es negativo." << endl;
    } else {
        cout << "El numero es cero." << endl;
    }

    return 0;
}
