#include <stdio.h>

int main()
{
    int n, i = 1;
    printf(" Enter the no. n for printing its multplication table :");
    scanf("%d", &n);

    while (i <= 10)
    {
        printf("%d X %d = %d\n", n, i, n * i);
        i++;
    }
    return 0;
}