// C program to set precision in floating point numbers
// using format specifier

#include <stdio.h>

int main()
{
    float f1, f2, f3;

    // printf("Enter three float values: ");
    scanf("%f %f %f", &f1, &f2, &f3);

    // 2 digits after the decimal point
    printf("%0.2f %0.2f %0.2f", f1, f2, f3);

    return 0;
}
