#include "underline.h"
/**
 * _printf - Is the main function of printf
 * @format: The input String
 * Return: The integer
*/
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int _printf(const char *format, ...)
{
    char *buffer;
    int i = 0, count = 0;
    va_list valist;
    int (*func)(char *, int, va_list);

    buffer = malloc(4000);
    if ((!format || !buffer) || (format[0] == '%' && format[1] == '\0'))
    {
        free(buffer);
        exit(1);
    }

    va_start(valist, format);

    while (format[i])
    {
        if (format[i] != '%')
        {
            buffer[count] = format[i];
            count++;
        }
        else
        {
            func = _Cprintf(format, count, valist);

            if (func != NULL)
            {
                count += func(buffer, count, valist);
                i++;
            }
            else
            {
                buffer[count] = format[i];
                count++;
            }
        }
        i++;
    }

    buffer[count] = '\0';
    write(1, buffer, count);
    va_end(valist);
    free(buffer);
    return count;
}
