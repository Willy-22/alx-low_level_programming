#include "main.h"

/**
  * print_alphabet - print alphabet
  *
  */

void print_alphabet(void)
{
	char d;

	d = 'a';
	while (d <= 'z')
	{
		_putchar(d);
		d++;
	}
	_putchar('\n');
}
