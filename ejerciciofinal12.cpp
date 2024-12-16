#include <iostream>
using namespace std;
// Escrito por Alberto �lvarez
int main() {
    int opcion;
    double numero, resultado;

    do {
        // Mostrar el men�
        cout << "Men� de opciones:" << endl;
        cout << "1. Calcular el cuadrado de un numero" << endl;
        cout << "2. Calcular el cubo de un numero" << endl;
        cout << "3. Salir" << endl;
        cout << "Ingrese su opcion (1-3): ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                // Calcular el cuadrado
                cout << "Ingrese un numero: ";
                cin >> numero;
                resultado = numero * numero;
                cout << "El cuadrado de " << numero << " es: " << resultado << endl;
                break;
            case 2:
                // Calcular el cubo
                cout << "Ingrese un numero: ";
                cin >> numero;
                resultado = numero * numero * numero;
                cout << "El cubo de " << numero << " es: " << resultado << endl;
                break;
            case 3:
                // Salir del programa
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                // Opci�n inv�lida
                cout << "Opci�n inv�lida, por favor elija una opci�n entre 1 y 3." << endl;
        }

    } while (opcion != 3);  // El ciclo se ejecuta hasta que el usuario elija salir

    return 0;
}
