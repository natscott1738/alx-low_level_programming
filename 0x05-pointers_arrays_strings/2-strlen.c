#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 * @l: string pointer passed to this function
 * Return: length of string
 */

int _strlen(char *l)
{
	int a = 0;

	for (; *l++;)
		a++;
	return (a);
}
