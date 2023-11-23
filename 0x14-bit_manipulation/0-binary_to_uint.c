#include "main.h"
/**
 * binary_to_uint - convert binary to decimal
 * @b: binary number
 * Return: decimal number
 * Ashraf Atef
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int j = 0, sum = 0;
	int i = 0;

	while (b[i])
		i++;
	for (j = 1, i--; i >= 0; j *= 2, i--)
		if (b[i] == '1')
			sum += j;
		else if (b[i] != '0')
			return (0);

	return (sum);
}
