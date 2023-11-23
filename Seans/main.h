#ifndef _MAIN_H_
#define _MAIN_H_

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
* struct print - print
* @parameter: The operator
* @f: the function associated
*/
typedef struct print
{
	char *parameter;
	int (*f)(va_list ap);
} print_type;
int _printf(const char *format, ...);
int _putchar(char c);
int _print_char(va_list ap);
int _print_string(va_list ap);
int _print_percent(va_list ap);
int _print_int(va_list ap);
int _print_reverse(va_list ap);
int _print_rot13(va_list ap);
int _print_unsigned(va_list ap);
int _print_octal(va_list ap);
int _print_binary(va_list ap);
int _print_hex_l(va_list ap);
int _print_hex_u(va_list ap);
char *convert(unsigned int num, int base);
int custom_print(const char *format, print_type argument[], va_list ap);
int _write_char(char c);

#endif