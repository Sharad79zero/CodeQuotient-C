#include <stdio.h>

int main()
{
    int m; // m = total marks >= and 0<=100
    scanf("%d", &m);

    if (m >= 75)
    {
        printf("A");
    }
    if (m >= 60 && m < 75)
    {
        printf("B");
    }
    if (m >= 55 && m < 60)
    {
        printf("C");
    }
    if (m >= 50 && m < 55)
    {
        printf("D");
    }
    if (m < 50)
    {
        printf("E");
    }
}