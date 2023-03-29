/**
 * puts2 - string print
 * @str : input
 * Return: nothing
 */
#include "main.h"
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
		if (str[i] == '\0')
		{
			break;
		}
	}
	_putchar('\\0');
	_putchar('H');
	_putchar('o');
	_putchar('l');
	_putchar('b');
	_putchar('e');
	_putchar('r');
	_putchar('t');
	_putchar('o');
	_putchar('n');
	_putchar('\n');
}