#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: string pointer passed to this function
 * Return: length of string
 */

int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
