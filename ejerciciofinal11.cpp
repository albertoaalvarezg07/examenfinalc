#include <iostream>
using namespace std;
// escrito por Alberto Álvarez
int main() {
    int numero, suma = 0;

    // Solicitar números al usuario hasta que ingrese uno negativo
    cout << "Ingresa números. El programa terminará cuando ingreses un número negativo." << endl;

    // Bucle para ingresar números
    do {
        cout << "Ingresa un número: ";
        cin >> numero;

        // Si el número es positivo o cero, lo sumamos
        if (numero >= 0) {
            suma += numero;
        }

    } while (numero >= 0);  // Continuar pidiendo números mientras el número no sea negativo

    // Imprimir la suma total
    cout << "La suma de todos los números ingresados es: " << suma << endl;

    return 0;
}
