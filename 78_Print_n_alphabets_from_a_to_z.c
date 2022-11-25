#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (char i = 97; i <= (96 + n); i++) // a is 97 and z is 122
    {
        printf("%c ", i);
    }
}