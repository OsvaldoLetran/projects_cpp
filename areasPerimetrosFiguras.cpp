#include<stdio.h>

using namespace std;

int main(void) {

    int op;
    float l1, l2;
    float re;
    float pe;
 
    printf("Areas y perimetros de las figuras\n");
    printf("1.Triangulo\n");
    printf("2.Cuadrado\n");
    printf("3.Rectangulo\n");
    printf("4.Circulo\n");
    printf("0.Salir\n");
    printf("escoja una opcion: ");
    scanf("%d", &op);
 
    switch(op) {
        case 0:
        {
            printf("Hasta pronto");
            break;
        }
        case 1:
        {
            printf("triangulo\n");
            printf("ingrese la medida de la base: ");
            scanf("%2f", &l1);
            printf("ingrse la medida de la altura: ");
            scanf("%2f", &l2);
            re = (l1 * l2)/2;
            printf("el resultado de area es: %2f\n", re);
            break;
        }
        case 2:
        {
            printf("cuadrado\n");
            printf("ingrese la medida de un lado: ");
            scanf("%2f", &l1);
            re = l1 * l1;
            pe = 4 * l1;
            printf("el resultado de area es: %2f\n", re);
            printf("el resultado de perimetro es: %2f\n", pe);
            break;
        }
        case 3:
        {
            printf("rectangulo\n");
            printf("ingresa la medida de la base: ");
            scanf("%2f", &l1);
            printf("ingrese la medida de la altura: ");
            scanf("%2f", &l2);
            re = l1 * l2;
            pe = (2 * l1) + (2 * l2);
            printf("el resultado de area es: %2f\n", re);
            printf("el resultado de perimetro es: %2f\n", pe);
            break;
        }
        case 4:
        {
            printf("Circulo\n");
            printf("ingrese la medida del radio: ");
            scanf("%2f", &l1);
            re = 3.1416 * l1 * l1;
            pe = 2 * 3.1416 * l1;
            printf("el resultado de area es: %2f\n", re);
            printf("el resultado de perimetro es: %2f\n", pe);
            break;
        }
        default:
            printf("\nOpcion no valida!");
    
    }
    return 0;
    
}
