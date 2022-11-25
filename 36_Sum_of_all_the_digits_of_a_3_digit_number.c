#include <stdio.h>
int main()
{
    int n, l, f, m, sum, t1;
    scanf("%d", &n);
    f = n / 100;
    t1 = n % 100;
    l = t1 % 10;
    m = t1 / 10;
    sum = l + m + f;
    printf("%d", sum);
    return 0;
}