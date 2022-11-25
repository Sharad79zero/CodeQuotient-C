#include <stdio.h>

int main()
{

    long int x, y, temperary;
    scanf("%ld\n%ld", &x, &y);
    if ((x > -1 && x < 10000) && (y > -1 && y < 10000))

    {
        temperary = x;
        x = y;
        y = temperary;
        printf("%ld\n%ld", x, y);
    }

    else
    {
        printf("Error: please Enter value between 0 and 9999");
    }

    return 0;

}