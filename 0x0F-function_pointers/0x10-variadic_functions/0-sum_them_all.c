#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all -  function that returns the sum of all its parameters
 * @n: number of parameters
 * Return: total of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	int total = 0;
	unsigned int a;
	va_list valist;

	va_start(valist, n);
	for (a = 0; a < n; a++)
		total += va_arg(valist, int);
	va_end(valist);
	return (total);
}
