#include <unistd.h>

/**
 * main - prints a text
 *
 * Description: using main function
 * this program prints a value to standard error
 * Returns: always 1 (success)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
