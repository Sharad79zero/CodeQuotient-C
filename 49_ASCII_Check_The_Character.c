#include <stdio.h>

int main()
{
    char c;
    scanf("%c", &c);

    if (c >= 48 && c <= 57)
    {
        printf("Digit");
    }
    if (c >= 65 && c <= 90)
    {
        printf("UPPER CASE");
    }
    if (c >= 97 && c <= 122)
    {
        printf("lower case");
    }
    if ((c >= 0 && c <= 47) || (c >= 58 && c <= 64) || (c >= 91 && c <= 96) || (c >= 123 && c <= 127))
    {
        printf("Special character");
    }
}