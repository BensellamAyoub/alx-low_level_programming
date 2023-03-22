#include <stdio.h>
/**
* main - entry point
*  : input
* Return: 0 succes
*/
int main(void)
{
	int n;

	long long int z;

	int sum[50];

	sum[0] = 1;
	sum[1] = 2;
	printf("1, 2, ");
	for (n = 2; n < 50; n++)
	{
	z = sum[n - 1] + sum[n - 2];
	printf("%lili, ", z);
	sum[n] = z;
	}
	return (0);
}
