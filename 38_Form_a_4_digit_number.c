#include <stdio.h>

int main()
{
    int a, b, c, d;
    int FourDigitNumber;
    scanf("%d%d%d%d", &a, &b, &c, &d); // Let a = 1 , b = 2 , c = 3 , d = 4

    FourDigitNumber = 1000 * a + 100 * b + 10 + c + d; // 1000*1 + 100*2 + 10*3 + 4 = 1234
    printf("%d", FourDigitNumber);
}