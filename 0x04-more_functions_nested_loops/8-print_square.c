#include "main.h"
                                       /**
 * print_square - print hashes square
 * @size: size of the square
 * Return: no return
 */

void print_square(int size)             {
        int i, j;

        for (i = 0; i < size; i++)
        {                                              for (j = 0; j < i; j++)                {
                        _putchar(0);
                }
	if (i != size - 1)
		_putchar('\n');
	}
	_putchar('\n');
}
