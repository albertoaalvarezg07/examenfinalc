#include <iostream>
using namespace std;
// escrito por Alberto Álvarez
// Función para intercambiar los valores de dos variables usando paso por referencia
void intercambiar(int &a, int &b) {
    int temp = a;  // Guardamos el valor de 'a' en una variable temporal
    a = b;         // Asignamos el valor de 'b' a 'a'
    b = temp;      // Asignamos el valor guardado de 'a' a 'b'
}

int main() {
    int num1, num2;

    // Solicitar al usuario que ingrese dos números
    cout << "Ingresa el primer número: ";
    cin >> num1;
    cout << "Ingresa el segundo número: ";
    cin >> num2;

    // Mostrar los valores antes de intercambiarlos
    cout << "Antes de intercambiar:" << endl;
    cout << "Primer número: " << num1 << endl;
    cout << "Segundo número: " << num2 << endl;

    // Llamar a la función para intercambiar los valores
    intercambiar(num1, num2);

    // Mostrar los valores después de intercambiarlos
    cout << "Después de intercambiar:" << endl;
    cout << "Primer número: " << num1 << endl;
    cout << "Segundo número: " << num2 << endl;

    return 0;
}
