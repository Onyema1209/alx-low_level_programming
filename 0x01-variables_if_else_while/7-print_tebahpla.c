#include <stdio.h>

/**
 *main- prints the lowercase alphabet in reverse,
 *followed by a new line
 *Return: (0) once successful
 */
int main(void)
{
	char alpha = 'z';

	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}
	putchar('\n');
	return (0);
}
