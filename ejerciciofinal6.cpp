#include <iostream>
using namespace std;
// escrito por alberto alvarez
int main() {
    int num1, num2, num3, num4, num5, referencia;

    // Solicitar los cinco números
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
    cout << "Ingrese el tercer numero: ";
    cin >> num3;
    cout << "Ingrese el cuarto numero: ";
    cin >> num4;
    cout << "Ingrese el quinto numero: ";
    cin >> num5;

    // Solicitar el número de referencia
    cout << "Ingrese el numero de referencia: ";
    cin >> referencia;

    // Lógica para verificar si todos los números son mayores que la referencia
    int resultado = (num1 > referencia) * (num2 > referencia) * (num3 > referencia) * (num4 > referencia) * (num5 > referencia);

    // Mostrar el resultado
    if (resultado == 1) {
        cout << "Todos los numeros son mayores que el numero de referencia." << endl;
    } else {
        cout << "Al menos un numero no es mayor que el numero de referencia." << endl;
    }

    return 0;
}
