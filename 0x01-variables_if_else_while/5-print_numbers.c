#include <stdio.h>

/**
 * main - print the string in printf function
 *
 * Description: using the main function
 * this program prints all numbers of base 10
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	putchar('\n');
	return (0);
}
