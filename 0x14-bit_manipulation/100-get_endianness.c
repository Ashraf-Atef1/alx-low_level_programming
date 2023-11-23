#include "main.h"
/**
 * get_endianness - get the number of bits to filps to get another number
 * @n: decimal number
 * @m: decimal number
 * Return: number of bits to flip
 * Ashraf Atef
 */

int get_endianness(void)
{
	unsigned short n = 1;
	unsigned short *p = &n;

	if (*((char *)p))
		return (1);
	else
		return (0);
}
