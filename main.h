#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>

typedef struct format
{
	char *id;
	int (*f)();
} match;

int _putchar(char c);
int print_37(void);
int _strlen(char *str);
int _strlen_cons(const char *str);
int printf_char(va_list val);
int printf_string(va_list val);
int _printf(const char *format, ...);
#endif
