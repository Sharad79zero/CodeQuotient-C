/*

BITWISE OPERATORS:-

1. Can't apply bitwise on float and double values.
2. Learn Binary form conversion.

TYPES:  1. & : Bitwise AND
        2. | : Bitwise OR
        3. ^ : Bitwise XOR
        4. ~ : Bitwise NOT
        5. << : Left Shift 
        6. >> : Right Shift

FORMULA:

    left shift: 3 << 1; [ x << y: x*2 ki power y ]
    right left: 3 >> 1; [ x >> y: x/2 ki power y ]

*/

#include <stdio.h>

int main()
{

    int a = 10, b = 6;

    printf("%d", a & b);
    printf("%d", a | b);
    printf("%d", a ^ b);
    printf("%d", a & b);

    printf("%d", a & b && b + 1 || 0);

    return 0;

}