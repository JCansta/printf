#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>
#include <string.h>

/**
 * *find_format - find the format to change the character.
 *@c:constant character.
 * Return: Always 0.
 */

int (*find_format(const char *c))(va_list)
{
	arg_t forms[] = {
		{"c", fo_char},
		{"s", fo_string},
		{"%", fo_unable},
		{"d", fo_integer},
		{"i", fo_integer},
		{"b", fo_binari},
		{"u", fo_unsigned},
		{"o", fo_octal},
		{"x", fo_hexalow},
		{"X", fo_hexahigh},
		{"p", fo_pointer},
		{"r", fo_reverse},
		{"R", fo_rot13},
		{NULL, NULL}
	};
	int i = 0;


	while (forms[i].op != NULL && (*c != *forms[i].op))
	{
		i++;
	}
	return (forms[i].f);
}
