/**
 * _strlen_recursion - lenght of string
 * @s : input
 * Return:  int lenght.
 */
#include "main.h"
int  _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}