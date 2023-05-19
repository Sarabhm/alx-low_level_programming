#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked -  function that allocates memory using malloc
 * @b: unsigned int
 * Return: always 0
 */
void *malloc_checked(unsigned int b)
{
	void *point;

	point = malloc(b);
	if (point == NULL)
		exit(98);
	return (point);
}
