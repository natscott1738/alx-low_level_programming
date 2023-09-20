#include "main.h"

/**
 **_strcat -  a function that concatenates two strings
 *
 *@src: pointer that has the string to be joined
 *@des: pointer that will have its string joined with the other
 *
 *Return: a pointer to the resulting string dest
 */
char *_strcat(char *des, char *src)
{
	int a, b;

	for (a = 0; des[a] != 0; a++)
	{
	}
	for (b = 0; src[b] != 0; b++, b++)
	{
		des[a] = src[b];
	}
	return (des);
}
