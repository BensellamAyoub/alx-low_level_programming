#include "main.h"
/**
 * @n : input n
 * print_line - print line
 */
void print_line(int n)
{
	int i, size;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
