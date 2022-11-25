#include <stdio.h>
int main()
{
    float celcTemp;
    float fahrenTemp;

    scanf("%f", &celcTemp);
    fahrenTemp=((celcTemp*9)/5) + 32;
    printf("%0.2f", fahrenTemp);

    return 0;
}