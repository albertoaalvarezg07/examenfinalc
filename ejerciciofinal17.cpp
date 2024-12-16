#include <iostream>
using namespace std;
// escrito por Alberto �lvarez
// Funci�n para intercambiar los valores de dos variables usando paso por referencia
void intercambiar(int &a, int &b) {
    int temp = a;  // Guardamos el valor de 'a' en una variable temporal
    a = b;         // Asignamos el valor de 'b' a 'a'
    b = temp;      // Asignamos el valor guardado de 'a' a 'b'
}

int main() {
    int num1, num2;

    // Solicitar al usuario que ingrese dos n�meros
    cout << "Ingresa el primer n�mero: ";
    cin >> num1;
    cout << "Ingresa el segundo n�mero: ";
    cin >> num2;

    // Mostrar los valores antes de intercambiarlos
    cout << "Antes de intercambiar:" << endl;
    cout << "Primer n�mero: " << num1 << endl;
    cout << "Segundo n�mero: " << num2 << endl;

    // Llamar a la funci�n para intercambiar los valores
    intercambiar(num1, num2);

    // Mostrar los valores despu�s de intercambiarlos
    cout << "Despu�s de intercambiar:" << endl;
    cout << "Primer n�mero: " << num1 << endl;
    cout << "Segundo n�mero: " << num2 << endl;

    return 0;
}
