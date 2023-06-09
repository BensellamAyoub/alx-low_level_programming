#include <stdlib.h>
/**
 * str_concat - concatenate 2 strings into s3
 * @s1 : input
 * @s2 : input
 * Return: array s3
 */
char *str_concat(char *s1, char *s2)
{
	int len_s1 = 0, len_s2 = 0;

	int i, j;

	char *s3;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len_s1] != '\0')
	{
		len_s1++;
	}
	while (s2[len_s2] != '\0')
	{
		len_s2++;
	}
	s3 = malloc((len_s1 * sizeof(char)) + ((len_s2 + 1) * sizeof(char)));

	if (s3 == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		s3[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		s3[i] = s2[j];
		i++;
	}
	s3[i] = '\0';
	return (s3);
}
