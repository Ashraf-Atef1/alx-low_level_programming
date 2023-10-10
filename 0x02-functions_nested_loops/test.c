#include <stdio.h>

int main(void)
{
    int n = 98; // Change this to the number of Fibonacci numbers you want to print
    unsigned long first = 1;
    unsigned long second = 2;
    unsigned long next;

    printf("%lu, %lu", first, second);

    for (int i = 3; i <= n; i++)
    {
        next = first + second;
        if (next >= first)
        {
            printf(", %lu", next);
        }
        else
        {
            unsigned long upper = (next >> 32);
            unsigned long lower = (next & 0xFFFFFFFF);
            printf(", %lu%08lu", upper, lower);
        }

        first = second;
        second = next;
    }

    printf("\n");

    return 0;
}