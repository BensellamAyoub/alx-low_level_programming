#include "main.h"
/**
 * print_sign - check sign
 * @n : input
 * Return: 1 is a letter 0 other
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
