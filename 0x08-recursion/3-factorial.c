/**
  * factorial - calc factorial of a number
  * @n : input
  * Return: facto output.
  */
int factorial(int n)
{
	if (n == 1)
	{
		return (1);
	}
	else
		if (n < 0)
		{
		return (-1);
		}
		else
		{
		return (n * factorial(n - 1));
		}
}

