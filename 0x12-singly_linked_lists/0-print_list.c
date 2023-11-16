#include <unistd.h>
#include "lists.h"
void print_num(int n);
/**
 * print_list - calculate the number of nodes
 * @h: pointer for a node in the linked list
 * Return: number of nodes
 * Ashraf Atef
 */

size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		if (h->str)
		{
			write(1, "[", 1);
			print_num(h->len);
			write(1, "] ", 2);
			write(1, h->str, h->len);
		}
		else
		{
			write(1, "[", 1);
			print_num(h->len);
			write(1, "] ", 2);
			write(1, "(nil)", 5);
		}
		write(1, "\n", 1);
		h = h->next;
		n++;
	}
	return (n);
}
/**
 * print_num - print number
 * @n: number to print out
 * Ashraf Atef
 */
void print_num(int n)
{
	char c_num = n % 10 + '0';

	if (n / 10 == 0)
	{
		write(1, &c_num, 1);
	}
	else
	{
		print_num(n / 10);
		write(1, &c_num, 1);
	}
}
