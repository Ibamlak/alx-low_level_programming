#include <stdio.h>

/**
 * main - prints a character in the putchar function
 *
 * Description: using main function
 * outputs combination of two digits
 * Return: 0
 */
int main(void)
{
	int x, y;

	for (x = '0'; x <= '9'; x++)
	{
		for (y = '1'; y <= '9'; y++)
		{
			if (x == y || y < x)
			{
				continue;
			}
			putchar(x);
			putchar(y);
			if (x < '8')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
