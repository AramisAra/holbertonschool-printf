#include "main.h"
/**
* print_char - prints a character to stdout
* @ap: the arguments pointer
*
* Return: the number of characters printed (always 1).
*/
int _print_char(va_list ap)
{
    int buffer = va_arg(ap, int);
    write(1, &buffer, 1);
    return (1);
}

/**
* print_string - prints a string to stdout
* @ap: the argument pointer
*
* Return: the number of characters printed
*/
int _print_string(va_list ap)
{
	char c;
	c = (char)va_arg(ap, int);
    while (c != '\0')
    {
	    _write_char(c);
        c++;
    }
    return (1);
}

/**
* print_int - prints a integer to stdout
* @ap: the argument pointer
*
* Return: the number of characters printed
*/
int _print_int(va_list ap)
{
	
	int d = va_arg(ap, int);

    if (d < 0) 
    {
		_write_char('-');
        d = -d; 
    }

    if (d == 0) 
    {
        _write_char('0');
    }
    else
    {
        int num_digits = 0;
        int i, temp = d;
		char digits[10];   
        while (temp != 0)
        {
            temp /= 10;
            num_digits++;
        }

        for (i = num_digits - 1; i >= 0; i--)
        {
            digits[i] = d % 10 + '0';
            d /= 10;
        }
                
        for (i = 0; i < num_digits; i++)
        {     
            _write_char(digits[i]);
        }
    }
    return (0);
}

