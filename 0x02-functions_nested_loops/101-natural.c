#include <stdio.h>
/**
 * main - entry point
 *  : input
 * Return: 0 succes
 */
int main(void)
{
	int n;

	int sum = 0;

	for (n = 0;  n < 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			sum = sum + n;
		}
	}
	printf("%i\n", sum);
	return (0);
}
