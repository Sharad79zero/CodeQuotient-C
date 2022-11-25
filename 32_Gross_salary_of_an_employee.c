#include <stdio.h>

int main()
{
    int n, grossSalary, HRA, DA;
    scanf("%d", &n);

    if (n >= 100)
    {

        HRA = (10 * n) / 100;
        DA = (20 * n) / 100;
        grossSalary = n + HRA + DA;
        printf("%d", grossSalary);
    }
    else
    {
        printf("ERROR please enter correct Basic salary!");
    }
    return 0;
}