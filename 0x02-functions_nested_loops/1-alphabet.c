#include "main.h"
/**
 * print_alphabeth - print all alphabeth in lower case
 */

void print_alphabeth(void)
{
	char letter;

	for(letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
