#include "main.h"

/**
 *_puts - a function that prints a string
 *
 *@s: this pointer will store the location of string
 *
 *Return: 0
 */
void _puts(char *s)
{
	while (*s != 0)
	{
		_putchar(*s);
		s++;
	}
	_putchar(10);
}
