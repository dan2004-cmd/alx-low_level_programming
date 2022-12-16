#include "main.h"

/**
 * print diagonal - print diagonal lines n times
 * @n: times diagonal lines is printed
 * Return: no return
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(0);
		}
		_putchar(92);
		if (i - (n - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
