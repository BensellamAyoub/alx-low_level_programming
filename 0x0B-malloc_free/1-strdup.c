#include <stdlib.h>
/**
 * _strdup - duplicate string
 * @str : input
 * Return: array
 */
char *_strdup(char *str)
{
	int len = 0;

	int i = 0;

	char *arr;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len] != '\0')
	{
		len++;
	}
	arr = malloc((len + 1) * sizeof(char));

	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		arr[i] = str[i];
	}
	return (arr);
}
