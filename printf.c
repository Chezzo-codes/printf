#include <stdarg.h>
#include <stdio.h>

typedef struct spec
{
    char s;
    void (func_p*)(int c)

}sp_t;

    sp_t specifier[] = {
        {"c", print_char},
        {"s", print_str},
        {"d", print_int},
        {"i", print_uint},
        {"%", get_modifier},
        {NULL, NULL}
    };
    int i;
/**
 * _printf -
 *
 */
void _printf(const char *format, ...)
{
    va_list args;
    va_start(args, format);

    while (*format != '\0') {

        if (*format == 'd') {
            int i = va_arg(args,int);
            putchar(51);
        } else if (*format == 'c') {
            int c = va_arg(args, int);
            printf( "%c\n", (char)c ) ;
        } else if (*format == 'f') {
            double d = va_arg(args, double);
            printf( "%f\n", d ) ;
        }
        format++;
    }

    va_end(args);
}

int main()
{
    _printf("dcfc", 3, 'a', 1.999, 'v');
}
