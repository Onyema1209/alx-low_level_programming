#include <stdio.h>

/**
 *main- prints all single digit numbers of base 10 starting from 0
 *followed by a new line.
 *Return: return (0) if successful
 */
int main(void)
{
	int l = 0;

	while (l < 10)
	{
		putchar(l + '0');
		l++;
	}
	putchar('\n');
	return (0);
}
