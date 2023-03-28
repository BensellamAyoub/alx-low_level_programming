/**
 * rev_string - reverse
 * @s : input
 * Return: nothing
 */
#include "main.h"
void rev_string(char *s)
{
	int i;

	int x = _strlen(s);

	for (i = x - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
