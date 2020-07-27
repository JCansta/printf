#include "holberton.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * _printf - print any character.
 *@format:string of characters.
 * Return: Always 0.
 */
int _printf(const char *format, ...)
{
	va_list arg;
	int contfor = 0, i = 0, contfunc = 0;
	int (*fofu)(va_list);

	if (format == NULL)
		return (0);
	va_start(arg, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] != '%')
			{
				fofu = (*find_format)(&format[i + 1]);
				if (fofu != NULL)
				{
					contfor++;
					contfunc += (*fofu)(arg);
				}
				else
				{
					write(1, &format[i], 1);
					write(1, &format[i + 1], 1);
				}
				i++;
			}
		}
		else
			write(1, &format[i], 1);
		i++;
	}
	i = i + contfunc - (contfor * 2);
	va_end(arg);
	return (i);
}
