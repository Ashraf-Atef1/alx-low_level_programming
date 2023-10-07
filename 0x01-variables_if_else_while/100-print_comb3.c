#include <stdio.h>

/**
 * main - print all compination numbers from 0 to 9 sparated by "," then start a new line
 * Return: print out 0 if there is no error
 * Ashraf Atef
 */
int main(void)
{
	int num;
	int num2;

	for (num = 48; num < 58; num++)
	{
		for(num2 = num + 1; num2 < 58; num2++ )
		{
			putchar(num);
			putchar(num2);
			if (num != '8' && num2 != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
