#include "main.h"
#include <unistd.h>

/**
  * _putchar - writes character to stdout
  * Return: 1 (success)
 */

int _putchar(char d)
{
	return write(1, &d, 1);
}
