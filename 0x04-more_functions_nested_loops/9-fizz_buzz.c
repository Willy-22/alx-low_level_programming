#include <stdio.h>

/**
  * main - print 1 to 100 for the multiples 3
  * print fizz, multiples of 5 buzz for both
  * print fizzbuzz.
  * Return: 0 (success)
 */

int main(void)
{
	int i;

	for (i = 0; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf(" fizzbuzz");
		}
		else if (i % 3 == 0)
		{
			printf(" fizz");
		}
		else if (i % 5 == 0)
		{
			printf(" buzz");
		}
		else
		{
			printf(" %d", i);
		}
	}
	printf("\n");
	return (0);
}
