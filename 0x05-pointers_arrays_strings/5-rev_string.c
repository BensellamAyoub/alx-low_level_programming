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
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
