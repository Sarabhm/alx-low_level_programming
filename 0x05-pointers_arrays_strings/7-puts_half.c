#include "main.h"
/**
 * puts_half - function printing half of a string
 * @str: string to be printed
 *return: always 0
 */
void puts_half(char *str)
{
	int len, j, i;

	len = 0;

	while (*(str + len) != '\0')
	{
		len++;
	}
	j = len / 2;
	if (len % 2)
	{
		j = ((len + 1) / 2);
	}
	for (i = j; i < len; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
