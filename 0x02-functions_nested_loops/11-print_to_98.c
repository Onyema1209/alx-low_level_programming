#include "main"

/**
 *print_to_98- print numbers froma given n to 98
 *@n: number test case
 *Return: void
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d", n);
		if (n > 98)
			--n;
		else if (n > 98)
			++n;
		printf(", ");
	}
	printf("%d", 98);
	printf("\n");
}
