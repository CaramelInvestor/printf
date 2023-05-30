#include "main.h"

/**
 * flag_plus - function that checks all + flag 
 *
 * @str: string pointer
 *
 * Return: return 1 if true, else return 0
 */

int flag_plus(const char **str)
{
	int i = 0;

	for (; (**str == '+') || (**str == '#') || (**str == ' '); (*str)++)
		(**str == '+') ? (i = 1) : (i += 0);
	return (i);
}


/**
 * flag_hash - function that checks all # flags
 *
 * @str: string pointer
 *
 * Return: return 1 if true, else return 0
 */

int flag_hash(const char **str)
{
	int i = 0;

	for (; (**str == '+') || (**str == '#') || (**str == ' '); (*str)++)
		(**str == '#') ? (i = 1) : (i += 0);
	return (i);
}

/**
 * flag_space - checks all empty space available
 *
 * @s: pointer to string
 * @val: value of variable list
 *
 * Return: 1 if true else 0
 */

int flag_space(const char **s, long int val)
{
	int i = 0;

	for (; (**s == ' ') || (**s == '#'); (*s)++)
		i = 1;
	if (val < 0 || (**s != 'i' && **s != 'l' && **s != 'd' && **s != 'h'))
		i = 0;
	return (i);
}
