#include <stdio.h>

/**
 * main - print the digits in the putchar function
 *
 * Description: using the main function
 * print combinations ow three digit
 * Return: 0
 */
int main(void)
{
	int x, y, z;

	for (x = '0'; x <= '9'; x++)
	{
		for (y = '0'; y <= '9'; y++)
		{
			if (x == y || y < x)
			{
				continue;
			}
			for (z = '0'; z <= '9'; z++)
			{
				if (y == z || z < y)
				{
					continue;
				}
				putchar(x);
				putchar(y);
				putchar(z);
				if (x <= '6')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
