/* A positive integer is called an Armstrong number
(of order n) if abcd... = an + bn + cn + dn +...

For example -
1.) 153 = 1*1*1 + 5*5*5 + 3*3*3
2.) 6 = 6*1
3.) 371 = 3*3 +7*3 + 1*3                            */
#include <math.h>
#include <stdio.h>

int main()
{
    int num, originalNum, remainder, n = 0;
    float result = 0.0;

    // printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    // store the number of digits of num in n
    for (originalNum = num; originalNum != 0; ++n)
    {
        originalNum /= 10;
    }

    for (originalNum = num; originalNum != 0; originalNum /= 10)
    {
        remainder = originalNum % 10;

        // store the sum of the power of individual digits in result
        result += pow(remainder, n);
    }

    // if num is equal to result, the number is an Armstrong number
    if ((int)result == num)
        /* printf("%d is an Armstrong number.", num); */
        printf("yes");
    else
        /* printf("%d is not an Armstrong number.", num); */
        printf("no");
    return 0;
}