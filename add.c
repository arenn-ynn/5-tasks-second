#include <stdio.h>

int main()
{
    int N = 0;
    printf("Enter the number!\n");
    scanf("%d", &N);

    int running = 1; // a boolean value
    int value = 0;

    while (running)
    {
        if (N != 0)
        {
            value += N;
            scanf("%d", &N);
        }
        else
        {
            printf("the result is %d!\n", value);
            running = 0;
        }
    }
}