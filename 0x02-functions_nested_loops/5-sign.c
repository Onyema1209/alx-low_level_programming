#include "main.h"

/**
 *print_sign- print the sign of a number
 *@n: n is the number to be checked
 *Return: 1 if number is positive , 0 if number is 0, else -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
