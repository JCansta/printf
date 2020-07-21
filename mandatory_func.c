#include "holberton.h"

int fo_char(va_list arg)
{
	char c;
	int resul;
	c = va_arg(arg, int);
	resul = write(1, &c, 1);
	return (resul);  
}

int fo_string(va_list arg)
{
	int count;
	char *s;
	s = va_arg(arg, char *);
  
	for (count = 0; s[count] != '\0'; count ++)
		write(1, &s[count], 1);

	return (count);
}

int fo_unable(va_list arg)
{
	(void)arg;
	char u;
	int resul2;
	u = '%';
	resul2 = write(1, &u, 1);
	return (resul2);  
}

int fo_integer(va_list arg)
{
	char *num;
	int count = 0;

	num = convert(va_arg(arg, int), 10);
	for (count = 0; num[count] != '\0'; count ++)
		write(1, &num[count], 1);

	return (count);
}
