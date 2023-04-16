#include "main.h"
/**
 * _isupper - is lower
 * @c : input
 * Return: 0 lower
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
