#include <stdio.h>

/**
 *main- prints all single digit numbers of base 10 starting from 0,
 *followed by a new line
 *Return: return (0) if successful
 */
int main(void)
{
		int i;
	for (i = 0; i < 10; i++)
	{
		printf("%i", i);
	}
	putchar('\n');
	return (0);
}
