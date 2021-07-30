#include "holberton.h"
#include <stdarg.h>
/**
 * _printf - print format
 * @format:char * - string
 *
 * Return: int - string length
 */
int _printf(const char *format, ...)
{
	int len = 0;
	const char *string;
	va_list arg;

	va_start(arg, format);
	if (format)
	{
		string = format;
		len = get_strlen(string);
		while (*format)
		{
			if (*format == '%')
			{
				format++;
				switch (*format)
				{
				case 's':
					print_str(va_arg(arg, char*));
				break;
				case 'c':
					_putchar((char)va_arg(arg, int));
				break;
				case 'd':
					print_int(va_arg(arg, int));
				break;
				case 'i':
					print_int(va_arg(arg, int));
				break;
				case '%':
				{
					_putchar('%');
				}
				break;
				/*case 'u':
				{
					int ret = va_arg(arg, unsigned int);

					if (ret < 0)
					{
						ret = ret * -1;
					}
					print_int(ret);
<<<<<<< HEAD
				}*/
=======
				}
				break;
>>>>>>> bb2611f5632cd333c4011559b073c92ad71d0906
				default:
					_putchar(*format);
				break;
				}
			}
			else
				_putchar(*format);
			format++;
		}
	}
	return (len);
}
