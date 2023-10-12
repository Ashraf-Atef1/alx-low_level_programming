#include "main.h"

/**
 * more_numbers - print all nums from 0 to 14
 * Ashraf Atef
 */
void more_numbers(void)
{
	int i;
	int j;
	int n;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '1'; j++)
			for (n = '0'; n <= '9'; n++)
			{
				if (j == '1')
				{
					if (n == '5')
					{
						break;
					}
					_putchar(j);
				}
				_putchar(n);
			}
		_putchar('\n');
	}
}
