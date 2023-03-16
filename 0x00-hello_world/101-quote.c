/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main()
{
	char *s = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	write(1,"s\n", strlen(s));
	return (1);
}
