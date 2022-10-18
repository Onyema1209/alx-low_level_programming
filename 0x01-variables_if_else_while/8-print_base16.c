#include <stdio.h>

/**
 *main- prints all the numbers of base 16 in lowercase,
 *followed by a new line
 *Return: return (0) if successful
 */
int main(void)
{
	char l = 'a';
	int n = 0;

	while (n < 10)
	{
		putchar(n + '0');
		n++;
	}
	while (l < 'g')
	{
		putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}
