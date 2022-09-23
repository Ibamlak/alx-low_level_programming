#include <stdio.h>

/**
 * main - print the characters in the puchar function
 *
 * Description: using the main function
 * this program prints lowercase alphabets
 * Return: 0
 */
int main(void)
{
	char letter;

	letter = 'a';
	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
