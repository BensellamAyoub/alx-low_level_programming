/*
* _strlen - string length
   * @*s : input
   * return - i
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
