#include "main.h"
<<<<<<< HEAD

/**
* _write_char - writes the character c to stdout
* @c: the character to print
*
* Return: the number of characters printed (always 1).
*/
int write_char(char c)
{
	return (write(1, &c, 1));
}

=======
#include <string.h>
>>>>>>> main
/**
* _print_char - writes a character to stdout
* @ap: the character to print
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
* _print_string - prints a string to
* @ap: the argument pointer
*
* Return: the number of characters printed (always 1)
*/
int _print_string(va_list ap)
{
	char *str;

	str = va_arg(ap, char *);

	if (str == NULL)
		str = "(null)";
	return (write(1, str, strlen(str)));
}

/**
 * _print_percent - prints a percent symbol to stdout
 * @ap: the argument pointer
 * Return: the number of characters printed
 */
int _print_percent(va_list ap)
{
    (void)ap;
    return (_write_char('%'));
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
    int count = 0;

    if (d < 0) 
    {
        _write_char('-');
        d = -d; 
        count++;
    }

    if (d == 0) 
    {
        _write_char('0');
        count++;
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
            count++;
        }
    }
    return count;
}

