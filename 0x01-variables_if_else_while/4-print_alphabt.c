#include <stdio.h>

/**
 * main - print the character in the putchar function
 *
 * Description: using the main function
 * this program prints letters except e and q
 * Return: 0
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'e' || i == 'q')
		{
			continue;
		}
		putchar(i);
	}
	putchar('\n');
	return (0);
}
