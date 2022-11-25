long fact(int n)
{
    long int f = 1; // LONG INT for storing the very large factorial of 15
    scanf("%d", &n);

    while (n > 0)
    {
        f = f * n;
        n--;
    }
    return f;
}