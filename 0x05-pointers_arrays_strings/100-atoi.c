#include "main.h"
/**
 * _atoi - return a number from a string
 * @s: the string to extract number from
 * Return: the number;
 * Ashraf Atef
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 0;
	int num = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign++;
		if (s[i] >= '0' && s[i] <= '9')
			num = num * 10 + s[i] - '0';
		i++;
	}
	if (sign % 2)
		num = -num;
	return (num);
}
