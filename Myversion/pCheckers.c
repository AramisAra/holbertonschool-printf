#include "underline.h"

/**
 * pChecker - checks for the need functions
 * @specifier: look at the value of the specifier
 * Return: the function
 */
int _Cprintf(const char *format, ...)
{
	print_type argument[] = {
	{"c", char_func},
	{"s", string_func},
	{"%", perecent_func},
	{"d", int_func},
	{"i", int_func},
	{NULL, NULL}
};
	va_list ap;
	int count = 0;

	va_start(ap, format);
	count = get_print(format, argument, ap);
	va_end(ap);
	return(count);
}