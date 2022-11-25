#include <stdio.h>

int main()
{
    int a = 10;
    float f = 1087.46;
    printf("a=%d \n", a);
    printf("a with minimum width=%9d \n", a);
    printf("a with minimum width left=%-9d \n", a);
    printf("f=%f \n", f);
    printf("f with decimal fixed=%20.3f \n", f);
    printf("f with decimal fixed left aligned=%-20.3f \n", f);
    return 0;
}