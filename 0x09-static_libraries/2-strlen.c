/**
 * _strlen - string lenght
  * @s : input
 * Return: i
 */
#include "main.h"
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
