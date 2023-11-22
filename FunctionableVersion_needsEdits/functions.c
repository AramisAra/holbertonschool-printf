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
    if (buffer == 'c') 
    {
		_write_char(va_arg(ap, int));
    }
    return (0);
}

/**
* print_string - prints a string to stdout
* @ap: the argument pointer
*
* Return: the number of characters printed
*/
int _print_string(va_list ap)
{
	int buffer = va_arg(ap, int);
    if (buffer == 's') 
    {
        while (buffer) 
        {
            _write_char(buffer);
            buffer++; 
        }
    }
    return (0);
}
/**
* print_percent - prints a percent symbol to stdout
* @ap: the arguments pointer (unused)
*
* Return: the number of characters printed (always 1).
*/
int _print_percent(va_list ap __attribute__((unused)))
{
	int buffer = va_arg(ap, int);
    if (buffer == '%') 
    {	
		while (buffer)
       		_write_char('%');
    }
	
    return (0);
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
        int temp = d;
		int i; 
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
            digits[i] = d % 10 + '0';
            d /= 10;
                  
            for (i = 0; i < num_digits; i++)
            {
                _write_char(digits[i]);
            }
        }
    }
    return (0);
}

