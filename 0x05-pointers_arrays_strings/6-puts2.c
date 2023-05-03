#include "main.h"
/**
 * puts2 - prints every other char of a string
 * @str: string that puts the chars from
 * Retrun: Always 0
 */
void puts2(char *str)
{
	int lgth, a;

	lgth = 0;

	while (*(str + lgth) != '\0')
	{
		lgth++;
	}

	for (a = 0; a < lgth; a += 2)
	{
		_putchar(str[a]);
	}

	_putchar('\n');
}
