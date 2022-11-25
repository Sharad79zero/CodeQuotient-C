#include <stdio.h>

void numDigits(int n)
{
    int count = 0;
    if (n == 0)
        count++;
    while (n != 0)
    {
        n = n / 10;
        count++;
    }
    printf("%d", count);
}

int main()
{
    int num;
    scanf("%d", &num);
    numDigits(num);
    return 0;
}