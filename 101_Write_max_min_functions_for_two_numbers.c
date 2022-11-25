#include <stdio.h>

int max(float n1, int n2)
{
    if (n1>n2)
    {
        return n1;
    }
    else return n2;
    
}
int min(float n1, int n2)
{

    if (n1<n2)
    {
        return n1;
    }
    else return n2;
    
}

int main()
{
    int n1, n2;
    scanf("%d%d", &n1, &n2);
    printf("%d %d", max(n1, n2), min(n1, n2));
    return 0;
}