#include "main.h"

/**
 **_strcat - a function that concatenates two strings
 *
 *@src: pointer that has the string to be joined
 *@des: pointer that will have its string joined with the other
 *
 *Return: a pointer to the resulting string dest
 */
char *_strcat(char *des, char *src)
{
	int i, j;

	for (i = 0; des[i] != 0; i++)
	{
	}
	for (j = 0; src[j] != 0; j++, i++)
	{
		des[i] = src[j];
	}
	return (des);
}
