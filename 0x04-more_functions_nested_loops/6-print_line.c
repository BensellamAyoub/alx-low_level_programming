#include "main.h"
/**
 * @size : input size
 * print_line - print line
 */
void print_square(int size)
{
	int i, j, size;

	if (size <= 0)
	{
		_putchar('\n');
		break;
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
