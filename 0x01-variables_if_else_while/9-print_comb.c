#include <stdio.h>

/**
 *main- prints all possible combinations of single-digit numbers
 *Numbers must be separated by ,  followed by a space
 *Numbers should be printed in ascending order
 *You are not allowed to use any variable of type char
 *You can only use the putchar, 4 times maximum
 *Return: return (0) if succsessful
 */
int main(void)
{
		int i = 0;
	while (i < 10)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(44);
			putchar(32);
		}
		i++;
	}
	putchar('\n');
	return (0);
}
