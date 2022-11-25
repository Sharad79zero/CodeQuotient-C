#include <stdio.h>

int main()
{
    int n; // n = number to be checked
    scanf("%d", &n);
    if (n % 5 == 0 && n % 7 == 0)
    {
        printf("yes");
    }
    if (n % 5 == 0 && n % 7 != 0)
    {
        printf("no");
    }
    if (n % 5 != 0 && n % 7 == 0)
    {
        printf("no");
    }
}