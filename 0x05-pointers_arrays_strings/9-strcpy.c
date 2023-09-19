#include "main.h"

/**
 **_strcpy -  a function that copies the string pointed to by src
 *
 *@src: this pointer that contains the string information
 *@dest: this pointer is to be copied
 *
 *Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *src != 0; dest++, src++, i++)
	{
		*dest = *src;
	}
	for (*dest = 0; i > 0; dest--, src--, i--)
	{
	}
	return (dest);
}
