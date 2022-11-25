#include <stdio.h>

int main()
{
    char c; // c = character
    scanf("%c", &c);
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    //  You can also use ASCII values to check alphabets.
    //  ASCII value of a=97, z=122, A=65 and Z=90
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}