#include <iostream>
using namespace std;
//codigo de Alberto �lvarez
int main() {
    float radio;
    float PI = 3.1416;

    // Solicitar el radio del c�rculo
    cout << "Ingrese el radio del cIrculo: ";
    cin >> radio;

    // Calcular el �rea y la circunferencia
    float area = PI * radio * radio;
    float circunferencia = 2 * PI * radio;

    // Mostrar los resultados
    cout << "Area del circulo: " << area << endl;
    cout << "Circunferencia del circulo: " << circunferencia << endl;

    return 0;
}
