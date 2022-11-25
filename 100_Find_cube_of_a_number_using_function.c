#include <stdio.h>

void cube(int n)
{
    int Cubed_Number = n * n * n;
    printf("%d", Cubed_Number);
}

int main()
{
    int num;
    scanf("%d", &num);
    cube(num);
    return 0;
}