int _printf(const char *format, ...)
{
    va_list args;
    int len = 0;
    const char *string;

    if (format == NULL)
    {
        return (-1);
    }

    if (format)
    {
        va_start(args, format);
        string = format;
        while (*format != '\0' && *format != '%')
        {
            len = get_strlen(string);

            putchar(*string);

            while (*string != '\0')
            {
                putchar(*string);
                string++;
            }
            putchar('\n');

            return (len);
        }

        if (*format == '%')
        {
            string = "Modifier Found";
            while(*string != '\0')
            {
                putchar(*string);
                string++;
            }
        }

            /*if (*format == 'd')
            {
                int i = va_arg(args,int);
                putchar(51);
            }
            else if (*format == 'c')
            {
                int c = va_arg(args, int);
                printf( "%c\n", (char)c ) ;
            }
            else if (*format == 'f')
                double d = va_arg(args, double);
                printf( "%f\n", d ) ;
            }*/
            format++;
        }

    va_end(args);
    return (get_strlen(string));
}
