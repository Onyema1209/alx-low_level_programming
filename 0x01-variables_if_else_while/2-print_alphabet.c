#include <stdio.h>

/**
 *main- prints the alphabet in lowercase, followed by a new line
 *Return: return (0) if succesful
 */
int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
