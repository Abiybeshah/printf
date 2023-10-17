#include "main.h"

/**
* print_oct - converts int to octal
* @val: the argument to be converted to octal
* Return: int
*/

int print_oct(va_list val)
{
	int i, count = 0;
	int *array;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int tem = num;

	while (num / 8 != 0)
	{
		num = num / 8;
		count++;
	}
	count++;
	array = malloc(sizeof(int) * count);
	for (i = 0 ; i < count ; i++)
	{
		array[i] = tem % 8;
		tem = tem / 8;
	}
	for (i = count - 1 ; i >= 0 ; i--)
		_putchar(array[i] + '0');
	free(array);
	return (count);
}
