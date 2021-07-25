#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...)
{
	unsigned int j, i, q, p = 1;
	char *index;
	char *str;
	
	va_list print;
	va_start(print, format);
	for (q = 0; format[q] != '\0'; q++)
	{
		index[q] = format[q];
	}
	for (index[q] = index[0]; *index != '\0'; index++)
	{
		while(*index != '%')
		{
			putchar(*format);
			index++;
		}

		index++;

			switch (*index)
			{
				case 'c':
					i = va_arg(print, int);
					putchar(i);

					break;
				case 's':
					str = va_arg(print, char *);
					for (j = 0; str[j] != '\0'; j++)
					{
						putchar(str[j]);
					}
					putchar('\0');
					break;
			}
		p++;
	}
	va_end(print);
	return (p);
}

