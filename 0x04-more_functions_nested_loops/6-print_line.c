#include "main.h"

/**
 * print_line - draw a straight line
 * @n: the number of lines
 * Return: void (nothing)
 */
void print_line(int n)
{
	int lsize;

	for (lsize = 1; lsize <= n; lsize++)
	{
		if (n <= 0)
			_putchar('\n');
		else
			_putchar('_');
	}
	_putchar('\n');
}
