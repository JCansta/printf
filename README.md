# Project to imitate the printf() command without using it
[![Build Status](https://travis-ci.org/joemccann/dillinger.svg?branch=master)](https://travis-ci.org/joemccann/dillinger)

# Header
```
#include "holberton.h"

int_printf(const char format, ...);
```

# Description
**_printf()** the function printf produce a output to stdout according to the format as recibed, can print any word and numbers. Printf works by taking the first argument: a string, that contains characters and each one its printed exactly as its appear, when it finds the percent character, know as a format specification, goes to the next argument and uses its value, printing according to the format specification.
There are some special characters that can affect the next characters depending of certain rules.

## usefull formats

 - **%d and %i**: this will take a decimal number a write in the string.
 - **%c**: this format will take the ASCII code and write the character acording to it.
 - **%s**: this will print a string that the pointer is pointing.
 - **%b**: this will take a decimal number and write as binari.
 - **%u**: will print and decimal number and if is a negative it will be writed as positive.
 - **%o**: take a decimal number and convert to octonal and write it.
 - **%x**: will take a decimal number and convert to hexadecimal number with the letters in lowercase and write it.
 - **%X**: as **%x** it will convert a decimal to hexadecimal number but the letters will be writed in uppercase.
 - **%r**: this format will write a string starting in the final to the beginning.
 - **%R**: will convert a string to Rot13 format and print it.

# Format of the format string
Is a character string that has literal characters and other elements that can be printed exactly as it appears. This format its composed by zero and more directives like ordinary characters with out the "%" that will print like they are; and the conversion specifications tha are introduced by the character "%" and ends with a conversion specifier (letter that activate the conversion).


#Return value
if the return its succesful the function return the number of characters printed except the null byte.