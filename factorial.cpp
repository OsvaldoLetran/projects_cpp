#include <iostream>

using namespace std;

int factorial(int);

int main(void)
{
    int numero;
    cout << "ingresa un numero: ";
    cin >> numero;
    cout << "Factorial de "<< numero << endl;
    cout << factorial(numero) << endl;
}

int factorial(int n)
{
    if(n < 0)
    {
        return 0;
    }
    else if(n > 1)
    {
        return n * factorial(n - 1);
    }
    return 1;
}