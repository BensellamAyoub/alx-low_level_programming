#include "main.h"
/**
 * print_sign - check sign 
 * @c : input
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
		return (1);
	}	
	else
	{	
		_putchar(45);
		return (0);
	}
}
