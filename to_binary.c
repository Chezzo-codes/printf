#include "holberton.h"
/**
 *print_bin - converts dec to binary
 *@dec: int decimal
 */
void print_bin(int dec)
{
	int bin=0, rem, i = 1;

	while(dec!=0)
	{
		rem = dec % 2;
		bin += (rem*i);
		dec /= 2;
		i *= 10;
	}

	_printf("%d",bin);
}
