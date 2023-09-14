#include <stdio.h>
#include<time.h>
/* more headers go here */
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* Calculate the last digit of n */
int lastDigit = n % 10;

/* Print the result based on the last digit */
printf("Last digit of %d is %d ", n, lastDigit);

if (lastDigit > 5)
{
printf("and is greater than 5\n");
}
else if (lastDigit == 0)
{
printf("and is 0\n");
}
else
{
printf("and is less than 6 and not 0\n");
}

return (0);
}

