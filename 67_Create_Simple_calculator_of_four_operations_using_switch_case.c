#include <stdio.h>

int main()
{
    float n1, n2; // n1 = number 1 , n = number2
    char c;       // for + , - , / , *

    scanf("%f %c %f", &n1, &c, &n2);

    switch (c)
    {
    case '+':
        printf("%0.2f", n1 + n2);
        break;

    case '-':
        printf("%0.2f", n1 - n2);
        break;

    case '/':
        printf("%0.2f", n1 / n2);
        break;

    case '*':
        printf("%0.2f", n1 * n2);
        break;

    default:
        break;
    }
}