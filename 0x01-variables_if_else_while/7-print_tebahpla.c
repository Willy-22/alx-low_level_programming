#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse,
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char q;

	for (q = 'z'; q >= 'a'; q--)
	{
		putchar(q);
	}
	putchar('\n');
	return (0);
}
