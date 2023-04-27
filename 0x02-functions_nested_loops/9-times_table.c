#include "main.h"
/**
 * times_table -  prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int a = 0;

	while (a < 10)
	{
		int b = 0;

		while (b < 10)
		{
			int prod = a * b;

			if (prod <= 9)
			{
				_putchar (prod + '0');
			}
			else
			{
				_putchar (prod / 10 + '0');
				_putchar (prod % 10 + '0');
				_putchar (',');
				_putchar (' ');
			}
			}
			b++;
		}
		a++;
		_putchar ('\n');
}
