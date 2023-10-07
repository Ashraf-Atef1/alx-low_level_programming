#include <stdio.h>

/**
 * main - print all compination of three numbers from 0 to 9 sparated by ","
 * then start a new line
 * Return: print out 0 if there is no error
 * Ashraf Atef
 */
int main(void)
{
	int num;
	int num2;
	int num3;
	int num4;

	for (num = 48; num < 58; num++)
	{
		for (num2 = 48; num2 < 58; num2++)
		{
			for (num3 = num; num3 < 58; num3++)
			{
				for (num4 = num2 + 1; num4 < 58; num4++)
				{
				putchar(num);
				putchar(num2);
				putchar(' ');
				putchar(num3);
				putchar(num4);
				if (num == '9' && num2 == '8' && num3 == '9')
				{
				continue;
				}
				putchar(',');
				putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
