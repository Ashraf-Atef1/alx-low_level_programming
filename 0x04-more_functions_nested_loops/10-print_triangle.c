#include "main.h"

/**
 * print_triangle - print triangle then add a new line
 * @size: n is the number of times the character \ should be printed
 * Ashraf Atef
 */
void print_triangle(int size)
{
    int i;
    int j;
    int n;

    if (size > 0)
    {
        for (i = 1; i <= size; i++)
        {
            for (j = 0; j < size - i; j++)
            {
                _putchar(' ');
            }
            for (n = 0; n < i; n++)
            {
                _putchar('#');
            }
            _putchar('\n');
        }
    }
    else
    {
        _putchar('\n');
    }
}
