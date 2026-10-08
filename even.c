#include <stdio.h>

int main()
{
    int N = 0;
    printf("Enter the goddamn number!\n");
    scanf("%d", &N);

    for (int i = 1; i <= N; ++i)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}