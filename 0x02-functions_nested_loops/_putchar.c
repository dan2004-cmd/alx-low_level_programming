#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to standout
 * Return: on success 1
 * on error, -1 is returned, and error is set approximately
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
