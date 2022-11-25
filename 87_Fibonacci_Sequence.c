#include <stdio.h>

void fib_sequence(int n)
{
    int i;

    long int t1 = 0, t2 = 1;

    long int nextTerm = t1 + t2;

    if (n != 1)
    {
        printf("%ld\n%ld\n", t1, t2); // print the first two terms t1 and t2
    }
    else
    {
        printf("%d", 0);
    }

    for (i = 3; i <= n; ++i) // print 3rd to nth terms
    {
        printf("%ld\n", nextTerm);
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    fib_sequence(n);
}