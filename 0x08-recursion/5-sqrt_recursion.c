#include "main.h"

int real_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: number to calculate the square root of
 * Return: result
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (real_sqrt_recursion(n, 0));
}

/**
 * real_sqrt_recursion - find natural square root recursively
 * @n: number to calculate the sqaure root of
 * @i: iterator
 * Return: result
 */
int real_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (real_sqrt_recursion(n, i + 1));
}
