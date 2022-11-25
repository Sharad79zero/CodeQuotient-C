#include <stdio.h>
int main()
{
    float P, T, R;
    float SI;
    scanf("%f %f %f", &P, &R, &T);
    SI = (P * R * T) / 100;
    printf("%0.2f", SI);
    return 0;
}