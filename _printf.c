#include "main.h"
/**
* _printf - custom printf
* @format: identifier
* Return: int
*/

int _printf(const char *format, ...)
{
	match m[] = {
		{"%c", printf_char}, {"%s", printf_string},
		{"%%", print_37}, {"%i", print_int},
		{"%d", print_dec}, {"%b", print_unsigned}
	};

	va_list args;
	int i = 0, len = 0;
	int j;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
Here:
	while (format[i] != '\0')
	{
		j = 5;
		while (j >= 0)
		{
			if (m[j].id[0] ==  format[i] && m[j].id[1] == format[i + 1])
			{
				len = len + m[j].f(args);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		_putchar(format[i]);
		len++;
		i++;
	}

	va_end(args);
	return (len);
}
