#include "main.h"
/**
 * print_diagonal - print diago
 * @n : input
 * Return: nothing
 */
void print_diagonal(int n)
{
	int j;

	int i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			_putchar(32); /* space */
		}
		_putchar(92); /* backslash */
		_putchar('\n');
	}
}
