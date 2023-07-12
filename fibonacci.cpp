#include<iostream>

using namespace std;

int fibonacci(int n)
{
    if(n == 0 || n == 1)
    {
	      return n;
    } else 
    {
	      return fibonacci(n - 2) + fibonacci(n - 1);
		}
}

int main()
{
    cout << "\nFIBONACCI \n\n" << endl;
    
    int i, num;
    
    do
    {
		    cout << "Ingrese un numero entero y positivo: ";
		    cin >> num;
    } while(num < 0);
    
		cout << "\nLa serie es: \n\n";
    
    for(i = 0; i < num; i++)
    {
	      if(fibonacci(i) != 0)
        {
			      cout << fibonacci(i);
            cout << ", ";
		    }
    }
    return 0;
}