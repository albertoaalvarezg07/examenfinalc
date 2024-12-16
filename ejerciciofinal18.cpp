#include <iostream>
using namespace std;
// escrito por Alberto Álvarez
// Función para calcular el mayor de tres números
void calcularMayor(int num1, int num2, int num3, int &mayor) {
    if (num1 >= num2 && num1 >= num3) {
        mayor = num1;  // Si num1 es el mayor
    } else if (num2 >= num1 && num2 >= num3) {
        mayor = num2;  // Si num2 es el mayor
    } else {
        mayor = num3;  // Si num3 es el mayor
    }
}

int main() {
    int numero1, numero2, numero3, mayor;

    // Solicitar al usuario que ingrese tres números
    cout << "Ingresa el primer número: ";
    cin >> numero1;
    cout << "Ingresa el segundo número: ";
    cin >> numero2;
    cout << "Ingresa el tercer número: ";
    cin >> numero3;

    // Llamar a la función para calcular el mayor
    calcularMayor(numero1, numero2, numero3, mayor);

    // Mostrar el resultado
    cout << "El mayor de los tres números es: " << mayor << endl;

    return 0;
}

