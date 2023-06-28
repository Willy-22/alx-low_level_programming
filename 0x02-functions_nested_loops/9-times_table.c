#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */

void times_table(void)
{
	int x, y, n;

	x = 0;

	while (x < 10)
	{
		y = 0;

		while (y < 10)
		{
			n = x * y;
			if (y == 0)
			{
				_putchar(n + '0');
			}
			if (n < 10 && y != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(n + '0');
			}
			else if (n >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
			y++;
		}
		x++;
		_putchar('\n');
	}
}
