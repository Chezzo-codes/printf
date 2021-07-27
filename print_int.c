#include "holberton.h"
/**
 * print_int - convert int to char to print
 * @num: int to convert
 */
void print_int(int num)
{
	if (num < 0)
	{
		num = num * -1;
		_putchar('-');
	}
	if (num > 9)
	{
		print_int(num / 10);
	}
	_putchar(num % 10 + '0');
}
