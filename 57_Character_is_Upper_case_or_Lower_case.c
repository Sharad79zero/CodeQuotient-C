#include <stdio.h>

int main()
{
    char c;
    scanf("%c", &c);
    if (c >= 65 && c <= 90) // These are the ASCII values but you can also use 'A' and 'Z' here
    {
        printf("UPPER");
    }
    else
    {
        printf("lower");
    }
}