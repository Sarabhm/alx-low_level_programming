#include "main.h"
/**
 *reverse_array - reverses the content of an array of integers
 *@a: is the array
 *@n: number of elements
 */
void reverse_array(int *a, int n)
{
	int b, swap;

	for (b = 0; b < n / 2; b++)
	{
		swap = *(a + b);
		*(a + b) = *(a + n - 1 - b);
		*(a + n - 1 - b) = swap;
	}
}
