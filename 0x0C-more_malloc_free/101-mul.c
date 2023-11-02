#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * is_digit_string - check if str is a valid number or not
 * @str: string of digits
 * Return: 1 if it's a number and 0 if not
 * Ashraf Atef
 */
int is_digit_string(const char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/**
 * multiply_numbers - multiply 2 strings of digits
 * @num1: string of digits
 * @num2: string of digits
 * Ashraf Atef
 */
void multiply_numbers(const char *num1, const char *num2)
{
	int len1 = (int)strlen(num1);
	int len2 = (int)strlen(num2);
	int len_result = len1 + len2;
	int i = 0;
	int j = 0;
	int leading_zeros = 0;
	int *result = (int *)calloc(len_result, sizeof(int));

	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
		{
			int product = (num1[i] - '0') * (num2[j] - '0');
			int sum = product + result[i + j + 1];

			result[i + j + 1] = sum % 10;
			result[i + j] += sum / 10;
		}
	}

	while (leading_zeros < len_result - 1 && result[leading_zeros] == 0)
	{
		leading_zeros++;
	}

	for (i = leading_zeros; i < len_result; i++)
	{
		printf("%d", result[i]);
	}
	printf("\n");

	free(result);
}
/**
 * main - multiply the 2 arguments user input
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 if exit right and 98 if there a problem
 * Ashraf Atef
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	if (!is_digit_string(argv[1]) || !is_digit_string(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	multiply_numbers(argv[1], argv[2]);
	return (0);
}
