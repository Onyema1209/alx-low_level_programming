#include "main.h"

/**
 *_abs- print the absolute value of a number
 *@num: is the number to be checked
 *Return: return the absolute value of num, else -value
 */
int _abs(int num)
{
	if (num >= 0)
		return (num);
	else
		return (-num);
}
