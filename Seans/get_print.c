#include "main.h"

/**
* custom_printf - matches specifier and returns count
* @format: a character string
* @argument: specifiers being checked against
* @ap: action pointer
*
* Return: the number of character printed
*/
int custom_printf(const char *format, print_type handlers[], va_list args)
{
	int i, j;
	int char_count = 0;

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	for (i = 0; format && format[i]; i++)
	{
		if (format[i] != '%')
		{
			char_count += _putchar(format[i]);
			continue;
		}
		
		for (j = 0; handlers[j].parameter; j++)
		{
			if (*handlers[j].parameter == format[i +1])
			{
				char_count += handlers[j].f(args);
				break;
			}
		}

		i++;

		if (!handlers[j].parameter)
		{
			char_count += _putchar('%');
			char_count += _putchar(format[i]);
		}
	}

	return (char_count);
}
