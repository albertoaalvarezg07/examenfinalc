#include <iostream>
#include <algorithm> // Para la función max y min
using namespace std;
//Codigo hecho por Alberto Álvarez
int main() {
    float num1, num2, num3;

    // Solicitar tres números al usuario
    cout<<"Ingrese el primer numero: ";
    cin>>num1;

    cout<<"Ingrese el segundo numero: ";
    cin>>num2;

    cout<<"Ingrese el tercer numero: ";
    cin>>num3;

    // Calcular el promedio
    float promedio = (num1 + num2 + num3) / 3;

    // Calcular la diferencia entre el mayor y el menor número
    float mayor = max({num1, num2, num3});
    float menor = min({num1, num2, num3});
    float diferencia = mayor - menor;

    // Mostrar los resultados
    cout<<"El promedio es: "<<promedio<<endl;
    cout<<"La diferencia entre el mayor y el menor es: "<<diferencia<< endl;

    return 0;
}
