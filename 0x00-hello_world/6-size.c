#include <stdio.h>

/**
 * main - write a program that prints string
 *
 * Description: using the main function
 * this program prints the size of a variable's value
 * Return: 0
 */
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	puts("size of a char: %d byte(s)\n", sizeof(c));
	puts("size of an int: %d byte(s)\n", sizeof(i));
	puts("size of a long int: %d byte(s)\n", sizeof(li));
	puts("size of a long long int: %d byte(s)\n", sizeof(lli));
	puts("size of float: %d byte(s)\n", sizeof(f));
	return (0);
}
