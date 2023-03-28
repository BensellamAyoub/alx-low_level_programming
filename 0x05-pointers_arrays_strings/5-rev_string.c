/**
 * rev_string - reverse
 * @s : input
 * Return: nothing
 */
#include "main.h"
void rev_string(char *s)
{
	int i;

	int x;

	if (*s == '\0')
	{
		return;
	}

	while (s[x] != '\0')
	{
		x++;
	}

	for (i = 0; i <= x - 1; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
	for (i = x - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
