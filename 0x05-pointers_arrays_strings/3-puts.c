#include "main.h"
/**
 * _puts - prints a string followed by a new line
 * @str: is the string
 * Return: always 0
 */
void _puts(char *str)
{
	int i = 0;

	for (i = 0; i < _strlen(str); i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
