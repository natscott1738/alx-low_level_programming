#include "main.h"

/**
 *_puts - a function that prints a string
 *
 *@str: this pointer will store the location of string
 *
 *Return: 0
 */
void _puts(char *str)
{
	while (*str != 0)
	{
		_putchar(*str);
		str++;
	}
	_putchar(10);
}
