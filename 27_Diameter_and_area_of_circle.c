#include <stdio.h>

int main()
{
    float radius, Diameter, area;
    scanf("%f", &radius);
    Diameter = radius * 2;
    area = 3.14 * radius * radius;
    printf("%0.2f %0.2f", Diameter, area);
    
}