#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main- prints the alphabet in lowercase, followed by a new line
 *Return: return (0) if succesful
 */
int main(void)
{
	int c;
		for (c = 97; c <= 122; c++)
	{
		putchar(c);
	}
		printf("\n");
	return (0);
}
