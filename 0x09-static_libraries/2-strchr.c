#include "main.h"
#include <stddef.h>

/**
  * _strchr - locates character in a string
  * @s: pointer to string
  * @c: character to be found
  * Return: s or NULL
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i]  >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (NULL);
}
