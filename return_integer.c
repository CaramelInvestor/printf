#include "main.h"
/**
 * return_integer - function that handles d
 * Description: makes convertion of integer
 * @arg: arguments
 * @s: char pointer
 * Return: returns count of digits
 */
int return_integer(const char *s, va_list arg)
{
	int a[18], h;
	long int k = 1, n, m = 100000000000000000;

	int counter = 0, sum = 0;

	h = hight(s, 'i');
	(h == 2) ? (n = va_arg(arg, long int)) : (n = va_arg(arg, int));
	if (h == 1)
		n = (short) n;
	if (n == 0)
		counter += my_putchar('0');
	if (n < 0)
	{
		n *= -1;
		my_putchar('-');
		counter++;
	}
	a[0] = n / m;

	for (; k < 18; k++)
	{
		m /= 10;
		a[k] = (n / m) % 10;
	}

	for (k = 0; k < 18; k++)
	{
		sum += a[k];
		if (sum != 0 || k == 18)
		{
			my_putchar('0' + a[k]);
			counter++;
		}
	}
	return (counter);
}
