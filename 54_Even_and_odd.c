#include <stdio.h>

int main()
{
    int n; // n = number
    scanf("%d", &n);
    if (n >= 1 && n <= 9999)
    {
        if (n % 2 == 0)
        {
            printf("Even");
        }
        if (n % 2 != 0)
        {
            printf("Odd");
        }
    }
}