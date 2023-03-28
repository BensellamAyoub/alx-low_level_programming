/**
 * print_rev - reverse
 * @s : input
 * Return: nothing
 */
#include "main.h"
void print_rev(char *s)
{
	int i;

	int j = 0;

	while (s[j] != '\0')
	{
		j++;
	}
	for (i = j; i <= 0; i--)
	{
		_putchar(s[i] + '0');
	}
	_putchar('\n');
}
