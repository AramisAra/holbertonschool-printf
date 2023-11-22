#ifndef UNDERLINE_H
#define UNDERLINE_H

/* Libararies */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/* Structures */
/**
 * struct s_underline - structure for underline
 * @pChecker: checkes parameters to indicate used functions
 * @usedFunctions: indicates which functions are used
*/
typedef struct print
{
	char *parameter;
	int (*f)(va_list valist);
} print_type;

/* Functions */

/* Gerenal use */
void _putchar(char c);

/* protof and pChecker for used Function*/
int _printf(const char *format, ...);
int _Cprintf(const char *format, ...);
/* Parameters Functions */
int char_func(char *buffer, va_list valist);
int string_func(char *buffer, va_list valist);
int int_func(char *buffer, va_list valist);
int perecent_func(char *buffer, va_list valist);

/* Assign and count len to Buff */

/* Strings Functions */
int _strlen(char *str);
char *_strcpy(char *orig, char *cpy);
char *_reverse(char *str, int len);
char *_rot13(char *str);
void _rev_ptr(char *str);



/* Int's Functions */

/* guard */
#endif
