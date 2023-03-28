/**
 * rev_string - reverse
 * @s : input
 * Return: nothing
 */
#include "main.h"
void rev_string(char *s)
{
	int i;

	if (*s == '\0')
	{
		return;
	}

	for (i = 0; i <= _strlen(*s) - 1; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
	for (i = _strlen(*s) - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
