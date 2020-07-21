#include <stdlib.h>
#include "holberton.h"
#include <stdio.h>
#include <stdarg.h>

int (*find_format(const char *c))()
{
  arg_t forms[] = {
    {"c", fo_char},
    {"s", fo_string},
    {"%", fo_unable},
    {"d", fo_double},
    {"i", fo_integer},
    {NULL, NULL}
    };
      int i = 0;

      while (forms[i].op != NULL && (*c != *forms[i].op))
      {
	      i++;
      }
      return (forms[i].f);
}
