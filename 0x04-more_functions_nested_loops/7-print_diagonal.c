#include "main.h"
/**
 *  print_diagonal(int n)
 * line print
 * @n : input
 * Return: nothing
 */
void print_diagonal(int n)
{
	int j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (j = 0; j < n; j++)
	{
		_putchar('32');
	}
	_putchar('\');
}
