#include <stdio.h>
#include "main.h"
/**
 * print_array - prints n elements of an array of integers
 * @a: is array to print
 * @n: is the number of elements to print
 * Return: Always 0
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n)
			printf("%d", *(a + i));
		else
			printf("%d, ", *(a + i));
	}
		printf("\n");
}
