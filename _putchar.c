#include "main.h"

/**
* _putchar - prints a character
* @c: the char to print
* Return: int
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
