#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
char r;

r = 'z';

while (r >= 'a')
{
putchar(r);
r--;
}
putchar('\n');
return (0);
}
