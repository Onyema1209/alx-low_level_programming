#include "main.h"

/**
 *print_alphabet_x10- 10 times the alphabet
 *in lowercase, followed by a new line
 *Return: return success
 */
void print_alphabet_x10(void)
{
	int digit = 0;
	char letter;

	while (digit < 10)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		digit++;
	}
}
