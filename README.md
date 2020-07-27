B# *Project to imitate the printf() command.
-----------------------
## Headers
```
#include "holberton.h": contains structures and other functions
#include <stdarg.h>: allows functions to accept an indefinite arguments
#include <unistd.h>: defines miscellaneous symbolic constants and types
#include <stdio.h>: standard input out
```

## printf Prototype
```
int_printf(const char format, ...);
```

# Description
**_printf()** the function printf produce a output to stdout according to the format as recibed, can print any word and numbers. Printf works by taking the first argument: a string, that contains characters and each one its printed exactly as its appear, when it finds the percent character, know as a format specification, goes to the next argument and uses its value, printing according to the format specification.
There are some special characters that can affect the next characters depending of certain rules.

## useful formats

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

## Format of the format string
Is a character string that has literal characters and other elements that can be printed exactly as it appears. This format its composed by zero and more directives like ordinary characters with out the "%" that will print like they are; and the conversion specifications tha are introduced by the character "%" and ends with a conversion specifier (letter that activate the conversion).

# How the prototype printf works

[click here Flowchart](https://drive.google.com/file/d/1iu8BecRprV-roObpJSNpMwbQlgOjN8FQ/view)

first of all, its important to use the headers below because, this function its a variadic function that can recive infinite numbers of arguments thats why we use "<stdarg.h>". Now that we acclare this, lets continue.

1. the main function "___printf__" will receive a string of characters, can be letters, numbers, or symbols, in any case, the function will print this, but if we want to print a __value of a variable__, the function will know if we give to then a __"special character + a letter"__ this is called format.

2. to do that, the function will start print all the characters one by one, when the percents symbol appear "__%__", the function gonna do a other process to change that percents and the next letters with the variable value.
2.1 first the function "__find_format__" evaluate the format "%__letter__" its in our list of formats.
2.2 If there its a __match__, find_format its gonna send this to other function that will convert and print the "%__letter__" in to the value of the variable.
2.3 in cases like numbers, the convert procces to the value can be more deep, using the function ___itoa__, will do all the work.

3. after this we receive two things, print the value and the number of characters we are printing, and that because the _printf function return to us a integer.

__the function will continue with the process until print all the characters.__

## Return value
if the return its succesful the function return the number of characters printed except the null byte.

## Contributors
[- Mauricio Contreras](https://github.com/mauroxcf)
[- Jaime Castro](https://github.com/JCansta)

## Special thanks
[credits to Farrukh Akhrarov "narnat" for the function itoa.](https://github.com/narnat)