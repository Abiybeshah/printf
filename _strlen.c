#include "main.h"

/**
* _strlen - returns the len of a str
* @str: str pointer
* Return: 1
*/

int _strlen(char *str)
{
	int i;

	for (i = 0 ; str[i] != 0 ; i++)
		;
	return (i);
}
/**
* _strlen_cons - applied to constant char
* @str: char pointer
* Return: 1
*/

int _strlen_cons(const char *str)
{
	int i;

	for (i = 0 ; str[i] != 0 ; i++)
		;
	return (i);
}
