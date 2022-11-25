#include <stdio.h>
/* Include other headers as needed */
int main()
{
    int l, b, a, p ;
    scanf("%d%d", &l,&b);
    if ((l<101 && l >0) &&(b<101 && b >0) )
    {
        a = l * b;
        p = 2 * (l + b);
        printf("%d %d", a, p);
    }

    else
    {
        printf("ERROR! please Enter Value B/W 1 and 100 ");
    }

    return 0;
}