/**
 * puts2 - string print
 * @str : input
 * Return: nothing
 */
#include "main.h"
void puts2(char *str)
{
	int len = 0;

	int i;

	while (str[len] != '\0')
	{
		len++;
	}

	for (i = 1; i <= len - 1; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
