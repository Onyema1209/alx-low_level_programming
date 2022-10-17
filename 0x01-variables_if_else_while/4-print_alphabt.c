#include <stdio.h>

/**
 *main- prints the alphabet in lowercase, followed by a new line
 *Print all the letters except q and e
 *Return: return (0) if successful
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);

}
