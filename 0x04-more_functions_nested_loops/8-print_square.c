#include "main.h"

/**
 * print_square - print square of a certain size
 * @size: dimension
 * Return: 0 (nothing)
 */
void print_square(int size)
{
	int cunt = 0;
	int sqr = 0;

	if (size > 0)
	{
		while (cunt < size)
		{
			while (sqr < size)
			{
				_putchar('#');
				sqr++;
			}
		sqr = 0;
		cunt++;
		_putchar('\n');
		}
	}
		else
		_putchar('\n');
}
