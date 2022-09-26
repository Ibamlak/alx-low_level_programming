#include <stdio.h>

/**
 * main - print the digit in the putchar function
 *
 * Description: using the main function
 * prints the combination of two digits
 * Result: 0
 */
int main(void)
{
	int i, x ,y , z;

	for (i = '0'; i <= '9'; i++)
	{
		for (x = '0'; x <= '9'; x++)
		{
			for (y = '0'; y <= '9'; y++)
			{
				for (z = '0'; z <= '9'; z++)
				{
					if ((i >= y && x > z) && (i == y && x == z)) 
					{
						continue;
					}
					putchar(i);
					putchar(x);
					putchar(' ');
					putchar(y);
					putchar(z);
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
