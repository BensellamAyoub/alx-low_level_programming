/**
 * reverse_array - reverse int of qrrqy
 * @a : input
 * @n : size array
 * Return: dest
 */
void reverse_array(int *a, int n)
{
	int i = 0;

	int tmp;

	for (i = 0; i < n / 2; i++)
	{
	tmp = *(a + i);
	*(a + i) = *(a + n - i - 1);
	*(a + n - 1 - i) = tmp;
	}
}
