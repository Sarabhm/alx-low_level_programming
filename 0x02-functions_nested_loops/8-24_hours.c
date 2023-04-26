#include "main.h"
/**
** jack_bauer -  description de boucle heure et minute
* this
* Return: Always 0.
*/
void jack_bauer(void)
{
	int h = 0;
		while (h < 24)
		{
			int m = 0;
				while (m < 60)
				{
					_putchar('0' + (h / 10));
					_putchar('0' + (h % 10));
					_putchar(':');
					_putchar('0' + (m / 10));
					_putchar('0' + (m % 10));
					_putchar('\n');
					m++;
				}
				h++;
		}
}
