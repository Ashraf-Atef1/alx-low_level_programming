#include "main.h"

/**
 * print_name - print hello and name of the person
 * @name: the name
 * @f: the function to print
 * Ashraf Atef
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
