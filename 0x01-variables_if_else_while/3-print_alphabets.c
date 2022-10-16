#include <stdio.h>

/**
 *main- prints the alphabet in lowercase, and then in uppercase,
 *followed by a new line
 *Return: return (0) if succesful
 */
int main(void)
{
	char lower = 'a';
	char upper = 'A';

	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}
	while (upper <= 'Z')
	{
		putchar(upper);
		upper++;
	}
		putchar('\n');
	return (0);
}
