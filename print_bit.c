#include "main.h"

/**
* print_bin - prints bits
* @val: the argument
* Return: int
*/

int print_bin(va_list val)
{
	int flag = 0;
	int i, a = 1, b;
	int count = 0;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int p;

	for (i = 0 ; i < 32 ; i++)
	{
		p = ((a << (31 - i)) && num);
		if (p >> (31 - i))
			flag = 1;
		if (flag)
		{
			b = p >> (31 - i);
			_putchar(b + 48);
			count++;
		}
	}
	if (count == 0)
	{
		count++;
		_putchar('0');
	}
	return (count);
}
