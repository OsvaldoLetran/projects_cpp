#include<iostream>
#include<iomanip>

using namespace std;

int factorial(int numero);
int formula(int numero, int posicion);

int main()
{
    int numero;
    
    cout<<"Ingrese la potencia: ";
    cin>>numero;
    
    int x = numero * 2;
    
    for(int i = 0; i <= numero; ++i, x -= 2){
        for(int s = 0; s <= x; s++)
            cout<<" ";
        for(int k = 0; k <= i; ++k){
            cout<<setw(4)<<formula(i, k);
        }
        cout<<endl;
    }
    cin.get();
    cin.get();

    return 0;
}

int factorial(int numero)
{
    int factorial = 1;
    for(int i = 1; i <= numero; ++i){
        factorial *= i;
    }
    return factorial;
}

int formula(int numero, int posicion)
{
   int combinacion;
   combinacion = factorial(numero) / (factorial(numero - posicion) * factorial(posicion));
   return combinacion;  
}
