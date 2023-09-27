#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - checks if a number is a prime number
 *
 * @n: the number to be checked
 * @divisor - the current divisor to check
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_prime(n, 2));
}

/**
 * check_prime - helper function to check if a number is prime recursivelly
 *
 * @n: the number to be checked
 * @divisor - the current divisor to check
 *
 * Return: 1 if prime, 0 otherwise
 */
int check_prime(int n, int divisor)
{
	if (divisor <= n / 2)
	{
		if (n % divisor == 0)
			return (0);
		return (check_prime(n, divisor + 1));
	}
	return (1);
}
