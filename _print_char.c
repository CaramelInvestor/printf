#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "main.h"

/**
 * print_char - function that prints character
 * @c: character to be prited
 * Return: return 1
 */

int print_char(va_list c)
{
unsigned char my_ch;
my_ch = va_arg(c, int);
_putchar(my_ch);
return (1);
}

/**
 * print_percent - function that prints percentage
 * Return: return 1
 */
int print_percent(void)
{
_putchar('%');
return (1);
}
