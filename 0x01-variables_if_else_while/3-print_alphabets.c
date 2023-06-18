#include <stdio.h>

/**
  * main - print the alphabet
  *
  * Return: 0 (succes)s
 */

int main(void)
{
	char e;

	char b;

	e = 'a';
	b = 'A';
	while (e <= 'z')
	{
		putchar(e);
		e++;
	}
	while (b <= 'Z')
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
