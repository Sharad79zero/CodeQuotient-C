#include <stdio.h>

int main()
{
    int SP, CP;
    scanf("%d\n%d", &SP, &CP);
    if (CP > SP)
    {
        printf("Profit\n%d", CP - SP);
    }
    else if (CP == SP)
    {
        printf("No Profit No Loss");
    }
    else
    {
        printf("Loss\n%d", SP - CP);
    }
}