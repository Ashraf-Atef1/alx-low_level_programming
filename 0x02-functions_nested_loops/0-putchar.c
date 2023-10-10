#include "main.h"
/**
 * main - print out '_putchar'
 * Return: 0
 * Ashraf Atef
 */

int main(void)
{
	int i;
	char textout[] = "_putchar";
	for (i = 0; i < (int)sizeof(textout) / sizeof(textout[0]); i++)
	{
		_putchar(textout[i]);
	}
	_putchar('\n');
	return (0);
}
