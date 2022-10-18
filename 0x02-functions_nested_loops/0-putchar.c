#include "main.h"

/**
 *main- prints _putchar, followed by a new line
 *Return: return (0) is successful
 */
int main(void)
{
	char *a = "_putchar";
	int b = 0;

	while (a[b] != '\0')
	{
		_putchar(a[b]);
		b++;
	}
	_putchar('\n');
	return (0);
}
