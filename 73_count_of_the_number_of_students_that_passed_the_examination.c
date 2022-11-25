#include <stdio.h>

int main()
{
    int N, marks; // N = No of Subjects
    int passCount = 0;
    scanf("%d", &N);

    for (int i = 0; i < N; i++)

    {
        scanf("%d", &marks);
        if (marks >= 0 && marks <= 100)
        {

            if (marks >= 50)
            {
                passCount = passCount + 1;
            }
        }
    }

    printf("%d", passCount);
}