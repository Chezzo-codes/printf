#include <stdarg.h>
#include <stdio.h>
#include <string.h>

int _printf(const char *format, ...)
{
    int i = 0, pos;
    va_list args;
    va_start(args, format);

    printf("Outside while loop\n");

        while (*format != '\0')
        {
            if (*format != '%')
            {
                putchar(*format);
                i++;
            }

            else if (*format == '%')
            {
                pos = i;

                if (format[pos + 1] == 'd')
                {
                    int j = va_arg(args, int);
                    printf( "%d\n", j ) ;
                }
                else if (format[pos + 1] == 'c')
                {
                    int c = va_arg(args, int);
                    printf( "%c\n", (char)c ) ;
                }
                else if (format[pos + 1] == 'f')
                {
                    double d = va_arg(args, double);
                    printf( "%f\n", d ) ;
                }
            }
            ++format;
        }
    va_end(args);
    return (strlen(format));
    printf("END OF FUNCTION");
}
