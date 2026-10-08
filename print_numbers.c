#include <stdio.h>

int main()
{
    int N = 0;
    printf("Enter the number!\n");
    scanf("%d", &N);

    for (int i = 1; i <= N; ++i)
    {
        printf("%d ", i);
    }
    printf("\n");
}