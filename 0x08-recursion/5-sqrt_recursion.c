#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion- returns the natural square root of a number using recursion
 *
 *
 * @n: the number for which the square root is to be calculated
 *
 * Return: the natural square root of a number, -1 if none
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return sqrt_recursive(n, 1);
}

/**
 * sqrt_recursive - recursive helper function for _sqrt_recursion
 *
 * @n: the number for which square root is to be calculated
 * @guess: the current guess for the square root
 *
 * Return: natural square root of n, -1 if none
 */
int sqrt_recursive(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	if (guess * guess > n)
		return (-1);
	return (sqrt_recursive(n, guess + 1));
}
