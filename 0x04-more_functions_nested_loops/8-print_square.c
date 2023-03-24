#include "main.h"
/**
 * print_square - print square
 * @size : input
 * Return: Always 0 (Success)
 */
void print_square(int size)
{
	int i, j, size;

	if (size <= 0)
	{
		_putchar(10);
		return;
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar(35);
		}
		_putchar(10);
	}
}
