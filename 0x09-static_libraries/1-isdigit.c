#include "main.h"

/**
  * _isdigit - checks for 0 to 9
  * @c: variable
  * Return: 1 (success), otherwise 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
