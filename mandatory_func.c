#include "holberton.h"

/**
 * fo_char - format char.
 *@arg: char argument.
 * Return: int.
 */

int fo_char(va_list arg)
{
	char c;
	int resul;

	c = va_arg(arg, int);
	if (c == '\0')
	{
		write(1, "", 1);
		return (0);
	}
	resul = write(1, &c, 1);
	return (resul);
}

/**
 * fo_string - format string.
 *@arg:string argument.
 * Return: int.
 */

int fo_string(va_list arg)
{
	int count;
	char *null = "(null)";
	char *s;

	s = va_arg(arg, char *);
	if (s == NULL)
	{
		for (count = 0; null[count] != '\0'; count++)
			write(1, &null[count], 1);
		return (count);
	}
	for (count = 0; s[count] != '\0'; count++)
		write(1, &s[count], 1);

	return (count);
}

/**
 * fo_unable - format unable.
 *@arg: argument percent.
 * Return: int.
 */

int fo_unable(va_list arg)
{
	char *u = "%";
	(void)arg;

	write(1, &u[0], 1);
	return (1);
}

/**
 * fo_integer - format integer.
 *@arg:integer argument.
 * Return: int.
 */

int fo_integer(va_list arg)
{
	char *num;
	int count = 0;

	num = convert(va_arg(arg, int), 10);
	for (count = 0; num[count] != '\0'; count++)
		write(1, &num[count], 1);

	return (count);
}

/**
 * fo_binari - format binari.
 *@arg:binari argument.
 * Return: int.
 */

int fo_binari(va_list arg)
{
	char *num;
	int count = 0;

	num = convert(va_arg(arg, unsigned long int), 2);
	for (count = 0; num[count] != '\0'; count++)
		write(1, &num[count], 1);

	return (count);
}
