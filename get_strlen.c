/**
 * get_strlen - gets length of a string
 * @str: string to find length
 * Return: int strlen
 */
int get_strlen(const char *str)
{
    int count = 0;
    if (!str)
    {
        return (-1);
    }
    else
    {
        while (*str != '\0')
        { 
            ++count;
            str++;
        }
    }
    return (count);
}
