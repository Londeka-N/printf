#include "main.h"
/**
 * printf_c - This function is used to iprint a single character for printf.
 * @ap: The argument list that holds the character to be printed.
 *
 * Return: 1 (indicating the number of characters printed).
 */
int printf_c(va_list ap)
{
	char character = va_arg(ap, int);

	_putchar(character);

	return (1);
}
