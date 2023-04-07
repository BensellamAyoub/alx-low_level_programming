/**
 * _puts_rev_recursion - rev  string with recursion
 * @s : input
 * Return:  output.
 */
#include "main.h"
void _puts_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
