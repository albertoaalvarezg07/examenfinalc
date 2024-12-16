#include <iostream>
#include <cmath>
using namespace std;
//escrito por Alberto Álvarez
int main() {
    int num1, num2;

    //Solicitar los dos números al usuario
    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    //Calcular la diferencia entre los dos números
    int diferencia = num1 - num2;

    //Usar la diferencia para determinar el resultado
    cout << "Resultado: " << endl;
    cout << "Mayor: " << num1 * (diferencia > 0) + num2 * (diferencia <= 0) << endl;
    cout << "Menor: " << num1 * (diferencia < 0) + num2 * (diferencia >= 0) << endl;


    return 0;
}
