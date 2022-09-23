#include <stdio.h>

/**
 * main - print the characters in the putchar function
 *
 * Description: using the main function
 * this program prints lower and uppercase alphabets
 * Return: 0
 */
int main(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
	{
		putchar(letters);
	}
	for (letters = 'A'; letters <= 'Z'; letters++)
	{
		putchar(letters);
	}
	putchar('\n');
	return (0);
}
