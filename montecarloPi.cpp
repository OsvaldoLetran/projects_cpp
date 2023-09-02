#include <iostream>  // "iostream" me permite sacar texto y numeros por el terminal.
#include <cmath>     // "cmath" es una colección de funciones matemáticas.
#include <fstream>

using namespace std;

int main(){
    double N = 1234;         // NÚMERO DE PUNTOS ALEATORIOS A LANZAR. ¡CAMBIAD ESTO!
    cout << "Número de 'dardos' a lanzar: " << N << endl;

    double r = 1;       // RADIO DEL CÍRCULO: Puedes cambiar este número si lo deseas.
 
    srand((unsigned)time(0));  // Para que el ordenador nos genere los números aleatorios.
    // Normalmente suele cogerse el tiempo del reloj del ordenador en ese momento.
    
    double x;                  // Defino las coordenadas de cada punto aleatorio.
    double y;
    double c = 0;              // Defino el número de puntos dentro del círculo. Partimos de 0.
    // int m = 1e7;
    int cota = 10;             // COTA. NÚMERO DE REPETICIONES DEL MÉTODO. Puedes cambiar este número si lo deseas.
    
    double pi_ar[cota];        // Defino el array que voy a llenar de los distintos pi's que obtenga.

    for (int j = 0; j < cota; j++) {               // Primer BUCLE. Repetirá Montecarlo "cota" veces.
        
        for (int i = 0; i < N; i++) {              // Segundo BUCLE. En cada vuelta, lanza un dardo.
            
            x = (double)rand() / (double)RAND_MAX;   // Generamos dos números aleatorios desde 0 a 1.
            y = (double)rand() / (double)RAND_MAX;
            
            x = x*r;                             // Dilato estos números hasta el radio. Ahora van de 0 a "r".
            y = y*r;                             // Estás son las coord. en las que ha caido un dardo.
            
            if (x*x + y*y < r*r) {    // Compruebo si el dardo está o no dentro del circulo. Si es así, c aumentará en uno.
                c++;
            }
        }                                        // FIN Segundo BUCLE
        
        pi_ar[j] = 4*c / N;                      // Calculo el pi generado en esta tanda y lo almaceno.
        c = 0;                                   // Inicializo a cero para la siguiente tanda de disparos.
        
    }                                          // FIN Primer BUCLE

    double pi = 0;    // Defino pi y el error de pi. Los inicializo a cero por el método para obtener la media y la SD.
    double err = 0;
    
    for (int j = 0; j < cota; j++) {
        pi = pi_ar[j] / cota + pi;                 // Hago la media de todos los pi's calculados
    }
    
    for (int j = 0; j < cota; j++) {
        err = err + pow(pi - pi_ar[j], 2) / cota;     // Calculo la desviación estándar de los pi's calculados.
    }
    
    err = sqrt(err);
        
    cout.precision(15); // Estos son el número de digitos que quiero que se expulsen por pantalla. Puedes aumentarlo si quieres.

    cout << "El valor de pi se encuentra entre: " << endl;
    cout << "Pi = "<< pi <<" +/- " << err << endl;

    return 0;    // cerramos el chiringuito
}