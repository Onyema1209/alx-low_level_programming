#include <stdio.h>

/**
 *main- prints all single digit numbers of base 10 starting from 0,
 *followed by a new line
 *Return: return (0) if successful
 */
int main(void)
{
	int l;

	while (l < 10)
	{
		printf("%d", l);
		l++;
	}
	printf("\n");
	return (0);
}
