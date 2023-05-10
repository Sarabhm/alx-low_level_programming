#include "main.h"
/**
 * _print_rev_recursion - function that prints a string in reverse
 * @s: the string
 */
void _print_rev_recursion(char *s)
{
	/* base case */
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar (*s);
	}
}
