#include <stdio.h>

void oddEven(int n)
{

    if (n % 2 == 0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
}

int main()
{
    int num;
    scanf("%d", &num);
    oddEven(num);
}