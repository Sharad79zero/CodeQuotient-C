/*
*******************************************
* WAP to add one to each digit of a       *
* 4 digit number. Ignore the carry digit. *
*******************************************

NOTE : -
    1.) % gives last number 
    2.) '/' gives first number 

*/

#include <stdio.h>
#include <math.h>
int main()
{
    int n, i = 0, ans = 0;
    scanf("%d", &n);
    while (n > 0)
    {
        int digit = (n % 10) + 1;
        digit %= 10;
        ans += digit * pow(10, i++);
        n = n / 10;
    }
    printf("%d", ans);
    return 0;
}