#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

typedef struct ope
{
	char *op;
	int (*f)();
} arg_t;

int _printf(const char *format, ...);
int (*find_format(const char *c))();

int fo_char(va_list arg);
int fo_string(va_list arg);
int fo_unable(va_list arg);
int fo_double(va_list arg);
int fo_integer(va_list arg);
char *convert(int num, int base);
#endif
