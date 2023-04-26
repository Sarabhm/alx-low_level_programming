#include "main.h"
/**
 *print_last_digit - the function that prints the last digit
 *@n: the int to extract the last digit
 *Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int a;

	if (n < 0)
		n = -n;

	a = n % 10;
	if (a < 0)
		a = -a;
	_putchar('0'+ a);
	return (a);
}
