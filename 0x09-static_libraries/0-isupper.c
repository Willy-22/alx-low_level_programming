#include "main.h"

/**
  * _isupper - to check if character is uppercase
  * @c: variable
  * Return: 1 (success) otherwise return 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
