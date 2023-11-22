#include "main.h"

/**
* custom_printf - matches specifier and returns count
* @format: a character string
* @...: variadic arguments
*
* Return: the number of characters printed
*/
int _printf(const char *format, ...)
{
	int i, j;
	int char_count = 0;
	va_list args;

	print_type argument[] = {
		{"c", _print_char},
		{"s", _print_string},
		{"%", _print_percent},
		{"d", _print_int},
		{"i", _print_int},
		{NULL, NULL}
	};

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);

	va_start(args, format);

	for (i = 0; format && format[i]; i++)
	{
		if (format[i] != '%')
		{
			char_count += _write_char(format[i]);
			continue;
		}

		for (j = 0; argument[j].parameter; j++)
		{
			if (*argument[j].parameter == format[i + 1])
			{
				char_count += argument[j].f(args);
				break;
			}
		}

		i++;

		if (!argument[j].parameter)
		{
			char_count += _write_char('%');
			char_count += _write_char(format[i]);
		}
	}

	va_end(args);

	return (char_count);
}
