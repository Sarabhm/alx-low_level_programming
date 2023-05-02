#include "main.h"
/**
 * print_rev - prints a stirng in reverse in a newline
 * @s: string to be printed
 * Return : always 0
 */
void print_rev(char *s)
{
	int a = 0;
		while (s[a] != '\0')
	{
		a++;
	}
	int b;
		for (b = a - 1; b > -1; b--)
	{
		_putchar(s[b]);
	}
	_putchar('\n');
}
