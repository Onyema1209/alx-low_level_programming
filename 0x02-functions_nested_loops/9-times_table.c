#include "main.h"

/**
 *times_table- print the 9 times table starting from 0
 *Return: void
 */
void times_table(void)
{
	int times1, times2, result;

	for (times1 = 0; times1 <= 9; times1++)
	{
		for (times2 = 0; times2 <= 9; ++times2)
		{
			result = times1 * times2;
			if (times2 != 0)
			{
				_putchar(',');
				_putchar(' ');
			if (result <= 9)
				_putchar(' ');
			}
			if (result <= 9)
			{
				_putchar('0' + result);
			}
			else
			{
				_putchar('0' + (result / 10));
				_putchar('0' + (result % 10));
			}
		}
		_putchar('\n');
	}
}
