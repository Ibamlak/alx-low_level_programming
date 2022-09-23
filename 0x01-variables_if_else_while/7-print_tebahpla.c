#include <stdio.h>

/**
 * main - print the character in the putchar function
 *
 * Description: using the main function
 * this program prints lowercase alphabet in reverse
 * Return: 0
 */
int main(void)
{
	char x;

	for (x = 'z'; x >= 'a'; x--)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
