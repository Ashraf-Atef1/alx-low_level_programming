#include "main.h"
/**
 * main - print out '_putchar'
 * Return: 0
 * Ashraf Atef
 */

int main(void)
{
	int i;
	int size;
	char textout[] = "_putchar";

	size = sizeof(textout) / sizeof(textout[0]);
	for (i = 0; i < size - 1; i++)
	{
		_putchar(textout[i]);
	}
	_putchar('\n');
	return (0);
}
