#include <stdio.h>

void table(int n, int m) // let n  = 2 , upto m = 5 !
{
    for (int i = 1; i <= m; i++) // n * i = 2 * 1 = 2 , 2 * 2 = 4 , 2 * 3 = 6 ...
    {
        printf("\n%d", n * i);
    }
}

int main()
{
    int n, m;
    scanf("%d", &n);
    scanf("%d", &m);
    table(n, m);
    return 0;
}