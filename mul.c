#include <stdio.h>

int main()
{
    int num = 0;
    printf("Enter the number!\n");
    scanf("%d", &num);

    for (int p = 1; p <= 10; ++p)
    {
        printf("%d * %d = %d\n", num, p, num * p);
    }
}