/**
 * _pow_recursion - x to power y
 * @x : input
 * @y : input
 * Return:  int x power y.
 */
#include "main.h"
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
