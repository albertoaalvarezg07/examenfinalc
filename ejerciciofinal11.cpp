#include <iostream>
using namespace std;
// escrito por Alberto �lvarez
int main() {
    int numero, suma = 0;

    // Solicitar n�meros al usuario hasta que ingrese uno negativo
    cout << "Ingresa n�meros. El programa terminar� cuando ingreses un n�mero negativo." << endl;

    // Bucle para ingresar n�meros
    do {
        cout << "Ingresa un n�mero: ";
        cin >> numero;

        // Si el n�mero es positivo o cero, lo sumamos
        if (numero >= 0) {
            suma += numero;
        }

    } while (numero >= 0);  // Continuar pidiendo n�meros mientras el n�mero no sea negativo

    // Imprimir la suma total
    cout << "La suma de todos los n�meros ingresados es: " << suma << endl;

    return 0;
}
