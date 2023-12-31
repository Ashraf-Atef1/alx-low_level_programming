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
	unsigned int num = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign++;
		if (s[i] >= '0' && s[i] <= '9')
			num = num * 10 + s[i] - '0';
		if (!(s[i] >= '0' && s[i] <= '9') && num)
			break;
		i++;
	}
	if (sign % 2)
		return (-num);
	return (num);
}
