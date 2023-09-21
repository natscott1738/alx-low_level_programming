#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 *
 * @a: the array to be evaluated
 * @n: the size of the array
 *
 * Return: empty
 * */
void reverse_array(int *a, int n)
{
	int begin;
	int pos = 0;
	int tmp;

	while (pos < n)
	{
		pos++;
	}
	pos--;
	for (begin = 0; begin <= pos, begin++)
	{
		tmp = a[begin];
		a[begin] = a[pos];
		a[pos] = tmp;
	}
}
