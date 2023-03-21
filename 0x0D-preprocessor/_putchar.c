#include <unistd.h>

/**
 * _putchar - Writes the character c to stdout
 * @c: The cha to print
 * Return: on success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
