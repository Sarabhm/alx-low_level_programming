#include "main.h"
/**
 * print_sign - is the fuction that prints the sign of a num
 *@n: is the value
 *Return: 1 if +; -1 if -, 0 if its zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
