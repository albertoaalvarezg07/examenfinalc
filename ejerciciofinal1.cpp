#include <iostream>
using namespace std;
//codigo de Alberto �lvarez
int main() {
    int num1, num2;

    // Solicitar los dos n�meros al usuario
    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    // Calcular la suma, resta, multiplicaci�n y divisi�n
    int suma = num1 + num2;
    int resta = num1 - num2;
    int multiplicacion = num1 * num2;
    int division = num1 / num2;

    // Mostrar los resultados
    cout<<"Suma: "<< suma<<endl;
    cout<<"Resta: "<<resta<< endl;
    cout<<"Multiplicacion: "<< multiplicacion << endl;
    cout<<"Division: "<<division<<endl;

    return 0;
}
