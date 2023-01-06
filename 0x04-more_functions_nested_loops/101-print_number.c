#include "main.h"
#include <stdio.h>
/**
 * print_number - print an int numbers.
 * @n: number tested
 * Return: Always 0.
 */
void print_number(int n)
{
	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	if (n / 10 > 0) 
	{
		print_number(n / 10);
	}
	_putchar(n % 10 + '0');
}
