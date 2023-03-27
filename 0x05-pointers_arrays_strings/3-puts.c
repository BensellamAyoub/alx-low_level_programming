/**
 * _puts - string print
 * @str : input
 * Return: nothing
 */
#include "main.h"
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	for (i = 0; i < _strlen(str); i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
