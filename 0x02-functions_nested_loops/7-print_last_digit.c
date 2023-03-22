#include "main.h"
/**
 * print_last_digit - check last digit
 * int : input
 * Return: 1 is a letter 0 other
 */
int print_last_digit(int a)
{
	a = a % 10;
	_putchar('0' + a);
}
