#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

/**
 * struct ope - ope.
 *@op: var.
 *@f:var.
 */

typedef struct ope
{
	const char *op;
	int (*f)();
}
arg_t;

int _printf(const char *format, ...);
int (*find_format(const char *c))(va_list);

int fo_char(va_list arg);
int fo_string(va_list arg);
int fo_unable(va_list arg);
int fo_double(va_list arg);
int fo_integer(va_list arg);
int fo_binari(va_list arg);

int fo_unsigned(va_list arg);
int fo_octal(va_list arg);
int fo_hexalow(va_list arg);
int fo_hexahigh(va_list arg);
int fo_pointer(va_list arg);

int fo_reverse(va_list arg);
int fo_rot13(va_list arg);
int fo_space(va_list arg);
char *convert(long int num, int base);


#endif
