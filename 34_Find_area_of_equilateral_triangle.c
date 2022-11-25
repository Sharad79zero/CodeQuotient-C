#include <stdio.h>
#include <math.h>

int main()
{
    float side;
    float Area;
    scanf("%f", &side);

    Area = (sqrt(3) / 4) * (side * side); // sqrt function is taken from math.h
    printf("%.2f", Area);

    return 0;
}