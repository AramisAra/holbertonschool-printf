#include "underline.h"
/**
 * printUL - handles the printing of the printf
*/

/**
 * char_func - handles the printing of the character
 * @buffer: is the buffer
 * @valist - is the valist
*/
int char_func(char *buffer, va_list valist)
{

    if (*buffer == 'c') 
    {
        int c = va_arg(valist, int); 
        putchar(c); 
    }
    return (0);
}

/**
 * string_func - handles the printing of the string
 * @buffer: is the buffer
 * @valist - is the valist
*/
int string_func(char *buffer, va_list valist)
{
    if (*buffer == 's') 
    {
        char *s = va_arg(valist, char *); 
        while (*s) 
        {
            putchar(*s); 
            s++; 
        }
    }
    return (0);
}

/**
 * int_func - handles the printing of the integer
 * @buffer: is the buffer
 * @valist - is the valist
*/
int int_func(char *buffer, va_list valist)
{
    int d = va_arg(valist, int);

    if (d < 0) 
    {
        putchar('-'); 
        d = -d; 
    }

    if (d == 0) 
    {
        putchar('0'); 
    }
    else
    {
        int num_digits = 0;
        int temp = d;      
        while (temp != 0)
        {
            temp /= 10;
            num_digits++;
        }

        char digits[num_digits];

        for (int i = num_digits - 1; i >= 0; i--)
        {
            digits[i] = d % 10 + '0';
            d /= 10;
        }
                
        for (int i = 0; i < num_digits; i++)
        {
            putchar(digits[i]);
            {
                digits[i] = d % 10 + '0';
                d /= 10;
            }
                    
            for (int i = 0; i < num_digits; i++)
            {
                putchar(digits[i]);
            }
        }
    }
    return (0);
}
/**
 * percent_func - handles the printing of the percent
 * @buffer: is the buffer
 * @valist - is the valist
*/
int percent_func(char *buffer, va_list valist)
{
    if (*buffer == '%') 
    {
        putchar('%'); 
    }
    return (0);
}