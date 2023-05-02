#include "main.h"
/**
 * print_rev - prints a stirng in reverse in a newline
 * @s: string to be printed
 * Return : always 0
 */
void print_rev(char *s)
{
	int a = 0;
		while (*s != '\0')
		{
			a++;
			s++;
		}
	int b;
		for (b = len - 1; b > -1; b--)
		{
			_putchar(s[b]);
		}
}
