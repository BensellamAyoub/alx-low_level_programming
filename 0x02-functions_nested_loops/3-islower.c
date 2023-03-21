#include "main.h"
/**
 * _islower - is lower
 * @c : input
 * Return: 1 lower
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
