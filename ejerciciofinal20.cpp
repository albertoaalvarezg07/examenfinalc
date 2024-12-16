#include <iostream>
#include <string>
using namespace std;

string encriptar(string& palabra, int numero);

int main()
{

   string palabra1, palabra2, palabra3, palabra4, palabra5, encriptado;
   int numero;

   cout << "Ingrese la palabra encriptada" << endl;
   cin >> encriptado;

   palabra1 = encriptar(encriptado, 1);
   palabra2 = encriptar(encriptado, 2);
   palabra3 = encriptar(encriptado, 3);
   palabra4 = encriptar(encriptado, 4);
   palabra5 = encriptar(encriptado, 5);



   cout << "Las posibles palabras desencriptadas son: " << endl << palabra1 << endl << palabra2 << endl << palabra3 << endl << palabra4 << endl << palabra5 <<endl;

   return 0;
}

string encriptar(string& palabra, int numero){

    string encriptado;
    encriptado = palabra;

    for(int i = 0; i < encriptado.length(); i++){
        encriptado[i] = char(palabra[i] - numero);
    }

    return encriptado;
}
