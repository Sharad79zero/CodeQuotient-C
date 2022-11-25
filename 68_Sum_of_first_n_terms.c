#include <stdio.h>

int main()
{
    int N, S;
    scanf("%d", &N); // Sn = n(n+1)/2
    if (N >= 1)
    {
        S = (N * (N + 1)) / 2;
        printf("%d", S);
    }
    else
    {
        printf("%d", 0);
    }
}