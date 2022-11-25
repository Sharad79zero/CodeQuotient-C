#include <stdio.h>
void main()
{
    int num, n, revnum = 0;
    // printf("Enter a five digit number: ");
    scanf("%d", &num);
    n = num;
    while (num != 0)
    {
        revnum = revnum * 10;
        revnum = num % 10 + revnum;
        num = num / 10;
    }
    // printf("Reversed Number of %d is %d", revnum);
    if (n == revnum)
        printf("Equal");
    else
        printf("Not Equal");
}