#include <stdio.h>

/**
   * main - implement the Fizz Buzz program
        * Return: 0 (success)
	 */
int main(void)
{
	int value = 1;
	
	while (value <= 100)
	{
		if (value % 3 == 0 && value % 5 == 0)
			printf("FizzBuzz ");
		else if (value % 5 == 0)
		{
			if (value == 100)
			{
				printf("Buzz");
				printf("\n");
			}		
			else
				printf("Buzz ")
		}
		else if (value % 3 == 0)
			printf("Fizz ");
		else
	return (0);
}
