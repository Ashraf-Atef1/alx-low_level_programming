#include <stdio.h>

int main(void)
{
    int n = 98;
    unsigned long first = 1;
    unsigned long second = 2;
    unsigned long next;

    printf("%lu, %lu", first, second);

    for (int i = 3; i <= n; i++)
    {
        next = first + second;
        printf(", %lu", next);

        first = second;
        second = next;
    }

    printf("\n");
    return 0;
}
