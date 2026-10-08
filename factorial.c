#include <stdio.h>

int main()
{
    int N = 0;
    printf("Enter your number!\n");
    scanf("%d", &N);

    int result = 0;

    for (int i = 1; i <= N; ++i)
    {
        result += i;
    }

    printf("result = %d\n", result);
}