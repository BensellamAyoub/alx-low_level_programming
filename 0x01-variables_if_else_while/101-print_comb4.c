#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	int j;

	int z;

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			for (z = j + 1; z < 10; z++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(z + '0');
				if (i != 7 || j != 7 || z != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar(10);
	return (0);
}
