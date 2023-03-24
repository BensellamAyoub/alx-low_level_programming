#include "main.h"
/**
 * print_diagonal - print diago
 * @n : input
 * Return: nothing
 */
void print_diagonal(int n)
{
	int i;

	int j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
