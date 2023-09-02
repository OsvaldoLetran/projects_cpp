#include <iostream>  // "iostream" me permite sacar texto y numeros por el terminal.
#include <cmath>     // "cmath" es una colección de funciones matemáticas que necesito.
#include <fstream>

using namespace std;  // A efectos práticos, esto es para no tener que poner "std" todo el rato.

int main(){
    double N = 1234;         // NÚMERO DE TÉRMINOS A SUMAR. ¡CAMBIAD ESTO!

    cout << "Número de términos que quierer sumar: " << N << endl;

    double S=0;  // Defino la suma total de los términos y la inicializo a 0.

    for (int i = 0; i < N; i++) {  // Bucle, recorre todo los naturales hasta N.
        S = S + 1/pow(i + 1, 2);     // En cada vuelta se añade a S el siguiente término.
    }
    
    double pi = sqrt(6*S);       // Se calcula pi.
    
    cout.precision(15); // Estos son el número de digitos que quiero que se expulsen por pantalla. Puedes aumentarlo si quieres.

    cout << "Pi = " << pi << endl;

    return 0;
}