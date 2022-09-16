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

	printf("size of a char: %lu byte(s)\n", sizeof(c));
	printf("size of an int: %lu byte(s)\n", sizeof(i));
	printf("size of a long int: %lu byte(s)\n", sizeof(li));
	printf("size of a long long int: %lu byte(s)\n", sizeof(lli));
	printf("size of float: %lu byte(s)\n", sizeof(f));
	return (0);
}
