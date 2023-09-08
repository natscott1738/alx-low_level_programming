#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("char: %lu byte(s)\n", sizeof(char));
	printf("int: %lu byte(s)\n", sizeof(int));
	printf("long int: %lu byte(s)\n", sizeof(long int));
	printf("long long int: %lu byte(s)\n", sizeof(long long int));
	printf("float: %lu byte(s)\n", sizeof(float));
	return (0);
}
