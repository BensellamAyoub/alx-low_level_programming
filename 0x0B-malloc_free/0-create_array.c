#include <stdlib.h>
/**
 * create_array -  create an array
 * @size : input
 * @c : caracter
 * Return: null
 */
char *create_array(unsigned int size, char c)
{
	int i, x;

	if (size == 0)
	{
		return (NULL);
	}
	x = malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
	{
		create_array[i] = c;
	}
}
