/**
 * _puts_recursion - string with recursion
 * @s : input
 * Return:  output.
 */
#include "main.h"
void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		_putchar(*(s + i));
		i++;
		_puts_recursion(s + i);
	}
	_putchar('\n');
}
