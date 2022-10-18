#include "main.h"

/**
 *main- prints _putchar, followed by a new line
 *Return: return (0) is successful
 */
int main(void)
{
	char *s = "_putchar";
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
