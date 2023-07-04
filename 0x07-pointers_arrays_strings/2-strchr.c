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
	for (; *s != '\0'; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	return (NULL);
}
