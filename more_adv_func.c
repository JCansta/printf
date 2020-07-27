#include "holberton.h"
#include <string.h>

/**
 *fo_reverse - print a reverse string
 *@arg: the parameter to be printed
 *Return: the number of characters printed
 */
int fo_reverse(va_list arg)
{
	char *end = va_arg(arg, char*);
	int i, r = 0;

	if (end == NULL)
		return (0);

	for (i = 0; end[i] != '\0'; i++)
	{
	}
	i--;

	for (; i >= 0; i--)
	{
		write(1, &end[i], 1);
		r++;
	}
	return (r);
}

/**
 *fo_rot13 - change the string to rot13
 *@arg: the parameter to be printed
 *Return: the number of characters printed
 */

int fo_rot13(va_list arg)
{
	int count;
	int count2;
	int val = 0;
	char *s = va_arg(arg, char*);
	char *alpha;
	char *rot13;

	if (s == NULL)
		return (0);

	alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (count = 0; s[count] != '\0'; count++)
	{
		val = 0;
		for (count2 = 0; alpha[count2] != '\0'; count2++)
		{
			if (s[count] == alpha[count2])
			{
				write(1, &rot13[count2], 1);
				val = 1;
				break;
			}
		}
		if (val == 0)
		{
			write(1, &s[count], 1);
		}
	}
	return (count);
}

/**
 * fo_space - if space do smth
 * @arg: the parameter to be printed
 * Return: the number of characters printed
 */

int fo_space(va_list arg)
{
	(void)arg;
	return (0);
}
