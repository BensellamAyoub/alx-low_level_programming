#include "main.h"
/**
 * print_line - line print
 * @n : input
 * Return: nothing
 */
void print_line(int n)
{
	int i, n;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (j = 0; j < n; j++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
