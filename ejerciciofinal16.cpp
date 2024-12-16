#include <iostream>
using namespace std;
// escrito por Alberto Álvarez
// Declaración de la función que devuelve la suma de dos números
int suma(int a, int b) {
    return a + b;  // Retorna la suma de a y b
}

int main() {
    int num1, num2;

    // Solicitar al usuario que ingrese dos números
    cout << "Ingresa el primer número: ";
    cin >> num1;
    cout << "Ingresa el segundo número: ";
    cin >> num2;

    // Llamar a la función suma y mostrar el resultado
    int resultado = suma(num1, num2);
    cout << "La suma de " << num1 << " y " << num2 << " es: " << resultado << endl;

    return 0;
}
