#include "main.h"
int real_prime_number(int n, int i);
/**
 * is_prime_number - returns prime number
 * @n: number to test
 * Return: 1 if prime else 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
		return (real_prime_number(n, 2));
	}
/**
 * real_prime_number - calculates if n is prime recursively
 * @n: int to test
 * @i: iterator
 * Return: 1 if prime else 0
 */
int real_prime_number(int n, int i)
{
	if (i == n)
	{
	return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	return (real_prime_number(n, i + 1));
}
