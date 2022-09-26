#include <stdio.h>

/**
 * main - print the digits in the putchar function
 *
 * Description: using the main function
 * it prints all possible combinations of two digits
 * Result: 0
 */
int main(void)
{
	int x, y;

	for (x = '0'; x <= '9'; x++)
	{
		for (y = '1'; y <= '9'; y++)
		{
			if (x == y || y < x )
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
