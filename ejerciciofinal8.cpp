#include <iostream>
using namespace std;
// escrito por Alberto �lvarez
int main() {
    int dia;

    // Solicitar un n�mero entre 1 y 7
    cout << "Ingrese un n�mero del 1 al 7: ";
    cin >> dia;

    // Usar switch para imprimir el d�a de la semana
    switch (dia) {
        case 1:
            cout << "Lunes" << endl;
            break;
        case 2:
            cout << "Martes" << endl;
            break;
        case 3:
            cout << "Miercoles" << endl;
            break;
        case 4:
            cout << "Jueves" << endl;
            break;
        case 5:
            cout << "Viernes" << endl;
            break;
        case 6:
            cout << "Sabado" << endl;
            break;
        case 7:
            cout << "Domingo" << endl;
            break;
        default:
            cout << "N�mero inv�lido. Ingrese un n�mero entre 1 y 7." << endl;
    }

    return 0;
}
