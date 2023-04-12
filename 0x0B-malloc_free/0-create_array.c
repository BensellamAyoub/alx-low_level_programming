#include <stdlib.h>
/**
 * create_array -  create an array
 * @size : input
 * @c : caracter
 * Return: array
 */
char *create_array(unsigned int size, char c)
{
	int i;

	char *arr;

	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(size * sizeof(char));

	if (arr == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
