#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	long long int fib[50];

	fib[0] = 1;
	fib[1] = 2;
	for (int i = 2; i < 50; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
	}
	for (int i = 0; i < 49; i++)
	{
		printf("%lld, ", fib[i]);
	}
	printf("%lld\n", fib[49]);
	return 0;
}
