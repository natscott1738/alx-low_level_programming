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
	while (*s != '\0')
	{
		if (*s == c)
			return s;
		s++;
	}
	if (*s == c)
		return s;
	return NULL;
}
