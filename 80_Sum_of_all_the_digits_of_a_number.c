#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    while (t--) // Why t-- ? because it will keep on decreasing the t value after the next line
    {
        int n, m, sum = 0;
        scanf("%d", &n);
        while (n > 0)
        {

            m = n % 10;
            n = n / 10;

            sum = sum + m;
        }
        printf("%d\n", sum);
    }

    return 0;
}
