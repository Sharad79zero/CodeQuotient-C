#include <stdio.h>

int main()
{
    int n, m, w = 69, i = 1; // n = table number, m = row limit, w = while loop activator ,i = table mulitply element like 1*i=1, 5*i=5
    scanf("%d %d", &n, &m);
    if (n >= 1 && m >= 1)
    {
        while (w == 69)
        {

            printf("%d\n", n * i);
            i++;

            if (i > m)
            {
                w = 70;
            }
        }
    }
}