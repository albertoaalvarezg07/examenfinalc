#include <iostream>
using namespace std;
// escrito por Alberto Álvarez
int main() {
    int opcion;
    double num1, num2, resultado;

    // Mostrar el menú de operaciones
    cout << "Seleccione una operación:" << endl;
    cout << "1. Suma" << endl;
    cout << "2. Resta" << endl;
    cout << "3. Multiplicacion" << endl;
    cout << "4. Division" << endl;
    cout << "Ingrese su opcion (1-4): ";
    cin >> opcion;

    // Solicitar los dos numeros
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    // Realizar la operación seleccionada usando switch
    switch (opcion) {
        case 1:
            resultado = num1 + num2;
            cout << "El resultado de la suma es: " << resultado << endl;
            break;
        case 2:
            resultado = num1 - num2;
            cout << "El resultado de la resta es: " << resultado << endl;
            break;
        case 3:
            resultado = num1 * num2;
            cout << "El resultado de la multiplicacion es: " << resultado << endl;
            break;
        case 4:
            // Verificar si el divisor es 0 para evitar división por 0
            if (num2 != 0) {
                resultado = num1 / num2;
                cout << "El resultado de la division es: " << resultado << endl;
            } else {
                cout << "Error: No se puede dividir por 0." << endl;
            }
            break;
        default:
            cout << "Opción invalida. Por favor, ingrese un numero entre 1 y 4." << endl;
    }

    return 0;
}
