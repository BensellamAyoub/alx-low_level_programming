#include "main.h"
/**
 * _isdigit - is digit
 * @c : input
 * Return: 1 is a digit  0 other
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
