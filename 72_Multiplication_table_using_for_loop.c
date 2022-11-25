#include <stdio.h>
int main()
{

    int n, i, m; //  n = table number, m = multiply limit , i = initialiser

    scanf("%d %d", &n, &m);

    for (i = 1; i <= m; ++i)
    {
        printf("%d\n", n * i);
    }

    return 0;
}
