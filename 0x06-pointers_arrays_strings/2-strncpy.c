#include "main.h"

/**
 **_strncpy - a function that copies a string
 *
 *@src: pointer that has the string to be copied
 *@dest: pointer that will be copied
 *@n: the size of bytes to be used from src
 *
 *Return: strings copied to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != 0; a++)
	{
		dest[a] = src[a];
	}
	for (; a < n; a++)
	{
		dest[a] = 0;
	}
	return (dest);
}
