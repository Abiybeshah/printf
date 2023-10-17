#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>

/**
* struct format - match the conversion specifiers for printf
* @id: type char pointer of the specifier i.e (l, h) for
* (d, i, u, o, x, X)
* @f: type pointer to fun for the conversion specifier
*/

typedef struct format
{
	char *id;
	int (*f)();
} match;

int _putchar(char c);
int printf_37(void);
int _strlen(char *str);
int _strlen_cons(const char *str);
int printf_char(va_list val);
int printf_string(va_list val);
int _printf(const char *format, ...);
int print_int(va_list args);
int print_dec(va_list args);
int print_unsigned(va_list args);
int print_bin(va_list val);
int printf_HEX(va_list val);
int printf_hex(va_list val);
int printf_oct(va_list val);

#endif
