#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int charset_length = sizeof(charset) - 1;

    int password_length = 11; // Adjust the length as needed

    srand(time(NULL));

    printf("Generated Password: ");
    for (int i = 0; i < password_length; i++)
    {
        int index = rand() % charset_length;
        putchar(charset[index]);
    }
    putchar('\n');

    return (0);
}
