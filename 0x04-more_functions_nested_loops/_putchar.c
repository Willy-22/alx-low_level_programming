#include "main.h"
#include <unistd.h>

/**
  * _putchar - print out character to stdout
  * @d: the character to print out
  * Return: 1 (success)
  */

int _putchar(char d)
{
	return (write(1, &d, 1));
}
