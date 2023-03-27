/**
 * _puts - string print
 * @str : input
 * Return: nothing
 */
#include "main.h"
void _puts(char *str)
{
	int j = 0;

	int i;

	while (str[j] != '\0')
	{
		j++;
	}

	for (i = 0; i < j; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
