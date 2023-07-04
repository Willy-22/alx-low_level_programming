#include "main.h"

/**
 * _memcpy - copies bytes from memory area
 * @dest: destination of memory
 * @src: source of memory
 * @n: number of bytes
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
