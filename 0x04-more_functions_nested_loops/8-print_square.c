#include "main.h"
/**
 * more_numbers - 0 to 9 no 2 and 4
 */
void more_numbers(void)
{
	int i, j, size;

	if (size <= 0)
	{
		_putchar('\n');
		break;
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
