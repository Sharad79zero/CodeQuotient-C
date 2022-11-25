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

int main()
{
    int NO, AAGE_KE_DO_NUMBER, PEECHE_KE_DO_NUMBER, firstNum, secondNum, thirdNum, fourthNum;
    int FinalNO;
    scanf("%d", &NO);

    if (NO >= 1000 && NO <= 9999)
    {
        // Let sample input be '4567'

        AAGE_KE_DO_NUMBER = NO / 100;   // Divide will give QUOTIENT so we will get '45' out of '4567'
        PEECHE_KE_DO_NUMBER = NO % 100; // Modulo will give REMAINDER so we will get '67' out of '4567'

        // Now seperate digits of '45' and then '67' using same method :)

        firstNum = AAGE_KE_DO_NUMBER / 10;    // It will store '4' out of '45'
        secondNum = AAGE_KE_DO_NUMBER % 10;   // It will store '5' out of '45'
        thirdNum = PEECHE_KE_DO_NUMBER / 10;  // It will store '6' out of '67'
        fourthNum = PEECHE_KE_DO_NUMBER % 10; // It will store '7' out of '67'

        firstNum++, secondNum++, thirdNum++, fourthNum++;

        if (firstNum > 9)
        {
            firstNum = 0;
        }

        if (secondNum > 9)
        {
            secondNum = 0;
        }

        if (thirdNum > 9)
        {
            thirdNum = 0;
        }

        if (fourthNum > 9)
        {
            fourthNum = 0;
        }

        int new_number;
        new_number = firstNum * 1000 + secondNum * 100 + thirdNum * 10 + fourthNum;
        printf("%d", new_number);
    }
}