/**
 * _strcat - concatenate a string into a string
 * @dest : input
 * @src : input
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;

	int j = 0;

	while (dest[j] != '\0')
	{
	j++;
	}
	while (src[i] != '\0')
	{
	dest[i + j] = src[i];
	i++;
	}
	dest[j + i] = '\0';
	return (dest);
}
