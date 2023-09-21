#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	long long int fib1 = 1;
	long long int fib2 = 2;
	long long int sum = 0;

	while (fib2 <= 4000000)
	{
		if (fib2 % 2 == 0)
		{
			sum += fib2;
		}
	long long int next_fib = fib1 + fib2;
	fib1 = fib2;
	fib2 = next_fib;
	}
	printf("sum of even-valued Fibonacci terms below 4000000: %lld\n", sum);
	return 0;
}
