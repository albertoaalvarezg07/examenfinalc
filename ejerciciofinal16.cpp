#include <iostream>
using namespace std;
// escrito por Alberto �lvarez
// Declaraci�n de la funci�n que devuelve la suma de dos n�meros
int suma(int a, int b) {
    return a + b;  // Retorna la suma de a y b
}

int main() {
    int num1, num2;

    // Solicitar al usuario que ingrese dos n�meros
    cout << "Ingresa el primer n�mero: ";
    cin >> num1;
    cout << "Ingresa el segundo n�mero: ";
    cin >> num2;

    // Llamar a la funci�n suma y mostrar el resultado
    int resultado = suma(num1, num2);
    cout << "La suma de " << num1 << " y " << num2 << " es: " << resultado << endl;

    return 0;
}
