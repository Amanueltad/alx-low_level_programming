#include "main.h"
#include <unistd.h>

/**
 * This is _putchar.c
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
