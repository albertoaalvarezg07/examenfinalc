#include <iostream>
using namespace std;
// escrito por Alberto �lvarez
// Funci�n para calcular el mayor de tres n�meros
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

    // Solicitar al usuario que ingrese tres n�meros
    cout << "Ingresa el primer n�mero: ";
    cin >> numero1;
    cout << "Ingresa el segundo n�mero: ";
    cin >> numero2;
    cout << "Ingresa el tercer n�mero: ";
    cin >> numero3;

    // Llamar a la funci�n para calcular el mayor
    calcularMayor(numero1, numero2, numero3, mayor);

    // Mostrar el resultado
    cout << "El mayor de los tres n�meros es: " << mayor << endl;

    return 0;
}

