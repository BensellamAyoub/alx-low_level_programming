#include "main.h"
/**
 * print_last_digit - check last digit
 *@a : input
 * Return: 1 is a letter 0 other
 */
int print_last_digit(int a)
{
	int x;

	x = a % 10;
	if (x < 0)
	{
		x = -x;
	}
	_putchar('0' + x);
	return (x);
}
