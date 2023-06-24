#include "main.h"

/**
  * print_line - print the number of line
  * @n: number of line to be printed
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 1; i >= n; ++i)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
