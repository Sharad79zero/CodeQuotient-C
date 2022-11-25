#include <stdio.h>

/*
 * Complete the function 'prime()'
 * @params
 *  n -> integer to be checked for primality
 * @return
 *  an integer , 1 if the number passed is prime else 0
 */

int prime(int n)
{
    for (int i = 1; i <= n / 2; i++)
    {
        if (i % 2 == 0)
        {
            return 1;
        }
        else
            return 0;
    }
}

int main()
{
    int test;
    int num;

    scanf("%d", &test);

    while (test != 0)
    {
        scanf("%d", &num);

        if (prime(num) == 1)
        {
            printf("PRIME\n");
        }
        else
        {
            printf("NOT PRIME\n");
        }
        test--;
    }

    return 0;
}