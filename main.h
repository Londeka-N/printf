#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
/**
 * struct prints - structure of interest
 * @specifier: the specifier of interest
 * @print_function: function tobe used
 * Description - describes function and specifier
*/

typedef struct prints
{
	char *specifier;
	int (*print_function)();
} print_t;

int _putchar(char c);
int _strlen(char *s);
int printf_c(va_list ap);
int printf_str(va_list ap);
int printf_37(void);
int printf_int(va_list ap);
int printf_b(va_list ap);
int printf_revstr(va_list ap);
int printf_rot(va_list ap);
int printf_ptr(va_list ap);
int _printf(const char *format, ...);

#endif
