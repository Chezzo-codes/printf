/**
 * show_int - convert int to char to print
 * @num: int to convert
 */
void print_int(int num)
{
    if (num > 9)
    {
        print_int(num / 10);
    }
    putchar(num % 10 + '0');
}
