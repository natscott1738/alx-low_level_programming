#include "main.h"

/** _memset - fill memory with a constant byte
 * @s: pointer to the memory to be filled
 * @b: the constant byte to fill with
 * @n: number of bytes to fill
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *start = s;

	while (n > 0)
	{
		*s = b;
		s++;
		n--;
	}
	return start;
}