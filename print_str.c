# include "holberton.h"
#include <stdio.h>

/**
 *
 *
 */

void print_str(char *ret)
{
	while (*ret)
	{
		_putchar(*ret);
		ret++;
	}
}