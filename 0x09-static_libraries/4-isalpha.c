#include "main.h"
/**
 * _isalpha - is alpha
 * @c : input
 * Return: 1 is a letter 0 other
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'z')
		return (1);
	else
		return (0);
}
