#include <stdio.h>

/**
 * main - prints the characters in the putchar function
 *
 * Description: using main function
 * outputs amm combination of single digit
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
