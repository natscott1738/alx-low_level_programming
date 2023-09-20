#include "main.h"

/**
 **_strncat - a function that concatenates two strings
 *
 *@src: pointer that has the string to be concatenated
 *@dest: pointer that will have its string concatenated with the other
 *@n: the size of bytes to be used from src
 *
 *Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	for (a = 0; dest[a] != 0; a++)
	{
	}
	for (b = 0; b < n && src[b] != 0; b++, a++)
	{
		dest[a] = src[b];
	}
	return (dest);
}
