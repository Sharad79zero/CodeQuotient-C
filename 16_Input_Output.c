
#include <stdio.h>

int main()
{
    char str[100];
    int i;
    printf("Enter a integer value :");
    scanf("%d", &i);
    printf("Enter a String :");
    scanf("%s", str);
    printf("\nYou entered: %s %d ", str, i);
    return 0;
}
