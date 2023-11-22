#include "main.h"

/**
* _printf - function that replaces what printf does
* @format: a character string
*
* Return: the number of character
*/
int _printf(const char *format, ...)
{
	print_type argument[] = {
	{"c", _print_char},
	{"s", _print_string},
	{"%", _print_percent},
	{"d", _print_int},
	{"i", _print_int},
	{NULL, NULL}
};
	va_list ap;
	int count = 0;

	va_start(ap, format);
	count = custom_print(format, argument, ap);
	va_end(ap);
	return(count);
}

