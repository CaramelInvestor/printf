#include <stdarg.h>
#include "main.h"


void convert_and_print(unsigned int num, int *count);

/**
 * print_binary - function that converts integer to binary
 * b: pointer to unsigned integer
 * Return: return integer, number of characters printed
 */

int print_binary(va_list b)
{
	unsigned int num = va_arg(b, unsigned int);
	int count = 0;

	convert_and_print(num, &count);

	return (count);
}

/**
 * convert_and_print - function that converts integer to binary, then prints it
 * @num: unsigned integer
 * @count: pointer to count the iteration
 */

void convert_and_print(unsigned int num, int *count)
{
	if (num / 2)
		convert_and_print(num / 2, count);

	_putchar((num % 2) + '0');

	(*count)++;
}
