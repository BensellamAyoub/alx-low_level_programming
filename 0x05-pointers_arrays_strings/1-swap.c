/**
 * swap_int - string print
 * @a : input
 * @b : input
 * Return: nothing
 */
#include "main.h"
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;

}
