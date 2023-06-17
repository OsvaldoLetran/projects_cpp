//es de humanos errar
// constantes van en mayuscula


// const int COSTHOTDOG = 100;
// const float BILL = 100.5;


#include<stdio.h>

#define PIZZACOST 1.5
const char NEWLINE = "\n";

int main()
{
    float costoPizzas;
    float numberOfSlices = 3;
    costoPizzas = PIZZACOST * numberOfSlices;
    printf("Total bill: %c %f", NEWLINE, costoPizzas);
    pritnf("%c", NEWLINE);
    return 0;
}
