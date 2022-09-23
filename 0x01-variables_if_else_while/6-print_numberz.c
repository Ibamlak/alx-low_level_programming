#include <stdio.h>

/**
 * main - print the digit in the putchar funtion
 *
 * Description: using the main funtion
 * this program prints digits
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
