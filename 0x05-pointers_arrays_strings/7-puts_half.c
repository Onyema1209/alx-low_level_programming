#include "main.h"

/**
 * puts_half - print the last half of a string
 * @str: string to be processed
 * Return: void (nothing)
 */
void puts_half(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; ++i)
		;
	for (j = (i + 1) / 2; j < i; ++j)
		_putchar(str[j]);
	_putchar('\n');
}
