#include <iostream>
#include <string>
using namespace std;

string encriptar(string& palabra, int numero);

int main()
{

   string palabra, encriptado;
   int numero;

   cout << "Ingrese una palabra" << endl;
   cin >> palabra;
   cout << "Ingrese un numero del 1 al 5 para la encripcion" << endl;
   cin >> numero;

   while (numero < 1 || numero > 5 ) {
         cout << "Error, ingrese un numero entero del 1 al 5" << endl;
        cin >> numero;
   }

   encriptado = encriptar(palabra, numero);

   cout << "La palabra encriptada es: "  << encriptado << endl;

   return 0;
}

string encriptar(string& palabra, int numero){

    string encriptado;
    encriptado = palabra;

    for(int i = 0; i < encriptado.length(); i++){
        encriptado[i] = char(palabra[i] + numero);
    }

    return encriptado;
}
