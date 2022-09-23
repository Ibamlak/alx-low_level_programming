#include <stdio.h>

/**
 * main - print the characters in the putchar function
 *
 * Description: using the main function
 * print hexadecimal numbers
 * Return: 0
 */
int main(void)
{
	char i;
	int x;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
	}
	for (i = 'a'; i < 'g'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
