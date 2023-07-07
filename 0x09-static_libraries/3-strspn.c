#include "main.h"
/**
 * _strspn - Entry point
 * @s: string
 * @accept: input
 * Return: Always 0 (Success)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found;
	int i;

	while (*s != '\0')
	{
		found = 0;

		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				found = 1;
				break;
			}
		}
		if (found == 0)
		{
			break;
		}

		count++;
		s++;
	}

	return (count);
}
