#include "holberton.h"
#include <string.h>
#include <ctype.h>

/**
 * fo_unsigned - format unsigned.
 *@arg:variadic funct unsigned argument.
 * Return: int.
 */

int fo_unsigned(va_list arg)
{
	char *num;
	int count = 0;
	long x;

	x = va_arg(arg, long int);
	if (x < 0)
	{
		x = -x;
	}
	num = convert(x, 10);
	for (count = 0; num[count] != '\0'; count++)
		write(1, &num[count], 1);

	return (count);
}

/**
 * fo_octal - format octal.
 *@arg:variadict funct argument.
 * Return: int.
 */

int fo_octal(va_list arg)
{
	char *num;
	int count = 0;
	int x;

	x = va_arg(arg, int);
	if (x < 0)
	{
		x = -x;
	}
	num = convert(x, 8);
	for (count = 0; num[count] != '\0'; count++)
		write(1, &num[count], 1);

	return (count);
}

/**
 * fo_hexalow - format hexalow.
 *@arg:variadict funct argument.
 * Return: int.
 */

int fo_hexalow(va_list arg)
{
	char *num;
	int count = 0;

	num = convert(va_arg(arg, unsigned int), 16);
	for (count = 0; num[count] != '\0'; count++)
		write(1, &num[count], 1);

	return (count);
}

/**
 * fo_hexahigh - format hexahigh.
 *@arg:variadict funct argument.
 * Return: int.
 */

int fo_hexahigh(va_list arg)
{
	char *num;
	int count = 0;

	num = convert(va_arg(arg, unsigned int), 16);
	while (num[count] != '\0')
	{
		num[count] = toupper(num[count]);
		count++;
	}
	for (count = 0; num[count] != '\0'; count++)
		write(1, &num[count], 1);

	return (count);
}
