#include "main.h"

/**
  * print_alphabet_x10 - prints alphabet 10 times
  * in lowercase letter
 */

void print_alphabet_x10(void)
{
	int a;
	char d;

	a = 0;
		while (a < 10)
		{
			d = 'a';
			while (d <= 'z')
			{
				_putchar(d);
				d++;
			}
			_putchar('\n');
			a++;
		}
}
