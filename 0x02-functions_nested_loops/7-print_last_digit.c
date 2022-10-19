#include "main.h"

/**
 *print_last_digit- print the last digit of a number
 *@num: the number to be printed
 *Return: last digit of num
 */
int print_last_digit(int num)
{
	int ld;

	ld = num % 10;
	if (ld < 0)
		ld = -ld;
	_putchar(ld + '0');
	return (ld);
}
