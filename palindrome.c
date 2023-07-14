#include <stdio.h>
#include <string.h>

void reverse(char [], int, int);

int main()
{
    char string1[60]; //Cadena de caracteres de 60
    int size;

    printf("Tyoe a cool sentence: \n");
    fgets(string1, 60, stdin);    // es un scanf pero para strings
    size = strlen(string1);

    reverse(string1, 0, size - 1); // string reverse
    printf("Reversed string: %s \n", string1);

    return 0;
}

void reverse(char str1[], int index, int size)
{
    char temp;

    temp = str1[index];
    str1[index] = str1[size - index];
    str1[size - index] = temp;

    if (index == size / 2)
    {
        return;
    }
    reverse(str1, index + 1, size);
}