/**
 * _strcat - concatenate a string into a string
 * @dest : input
 * @src : input
 * @n : n bytee
 * Return: dest
 */
char *_strcat(char *dest, char *src, int n)
{
	int i = 0;

	int j = 0;

	while (dest[j] != '\0')
	{
	j++;
	}
	while (src[i] != '\0' && i < n)
	{
	dest[i + j] = src[i];
	i++;
	}
	dest[j + i] = '\0';
	return (dest);
}
