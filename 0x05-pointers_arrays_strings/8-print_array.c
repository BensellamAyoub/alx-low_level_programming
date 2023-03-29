/**
 * print_array - string print
 * @a : input
 * @n : input
 * Return: nothing
 */
#include "main.h"
#include <stdio.h>
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	_putchar('\n');

}
