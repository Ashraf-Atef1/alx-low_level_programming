#include <stdio.h>

int main()
{
	int a = 2;
	int *c = &a;
	*(c + 2) = 2;
	printf("%d\n", c[0]);
	printf("%p\n", &c[2]);

	return 0;
}