#include <stdio.h>

enum weekDays
{
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thrusday,
    Friday,
    Saturday
} today;

int main()
{
    // enum weekDays today;   // en lugar de esta linea declaro today afuera del enum
    today = Wednesday;
    printf("Day %d", today + 1);
    printf("Size of var %d", sizeof(today))
    return 0;
}
