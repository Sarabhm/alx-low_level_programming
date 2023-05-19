#include "main.h"
#include <stdlib.h>
/**
 * _calloc - function that allocates memory for an array
 * @nmemb: unsigned int
 * @size: size of unsigned int
 * Return: 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *point;
	unsigned int a;

	if (nmemb == 0 || size == 0)
		return (NULL);
	point = malloc(nmemb * size);
	if (point == NULL)
		return (NULL);
	for (a = 0; a < (nmemb * size); a++)
		point[a] = 0;
	return (point);
}
