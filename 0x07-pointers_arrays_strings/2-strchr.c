#include "main.h"

/**
 * _strchr - locate a character in a string
 *
 * @s: pointer to the string to search
 * @c: the character to locate
 *
 * Return: pointer to the first occurence of c in s
 */
char *_strchr(char *s, char c)
{
	char *i = s;

	while (*i != 0 && *i != c)
	{
		i++;
	}
	if (*i != c)
	{
		return (0);
	}
	return (i);
}
