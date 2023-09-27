#include "main.h"
#include <stdio.h>

/**
 * factorial - returns the factorial of a given number
 *
 * @n: the number for which factorial is to be calculated
 *
 * Return: the factorial of the number or -1 for error
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (1);
	return (n * factorial(n - 1));
}
