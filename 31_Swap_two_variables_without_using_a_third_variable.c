// C Program to swap two numbers without using temporary
// variable
#include <stdio.h>
int main()
{
    int x, y;

    scanf("%d \n %d", &x, &y);
    if ((x >= 0 && x <= 9999) && (y >= 0 && y <= 9999))
    {
        // Code to swap 'x' and 'y'
        x = x + y; // x now becomes 15
        y = x - y; // y becomes 10
        x = x - y; // x becomes 5

        printf("%d\n%d", x, y);
    }
    else
    {
        printf("ERROR!");
    }
    return 0;
}
