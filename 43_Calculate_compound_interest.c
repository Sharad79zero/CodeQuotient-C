#include <stdio.h>
#include <math.h>

// Driver code
int main()
{

    float principal, rate, time;
    scanf("%f%f%f", &principal, &rate, &time);

    float CI = principal * ((pow((1 + rate / 100), time)));

    printf("%0.1f", CI);
    return 0;
}