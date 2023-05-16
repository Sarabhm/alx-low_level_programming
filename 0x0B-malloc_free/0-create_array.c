#include "main.h"
#include <stdlib.h>
/**
 * create_array - Main to create an array of chars
 * @size: taille du caractère
 * @c: input
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
		char *tableau;
		unsigned int a;

		if (size == 0)
		{
			return (NULL);
		}
	       tableau = malloc(sizeof(char) * size);

		if (tableau == NULL)
		{

			return (NULL);
		}

		for (a = 0; a < size; a++)
		{
			tableau[a] = c;
		}

		return (tableau);
}
