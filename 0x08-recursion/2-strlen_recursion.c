#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - returns the length of a string using recursion
 *
 * @s: the string for which length is to be calculated
 *
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
