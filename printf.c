#include "main.h"

/**
* _printf - personal print function
* @format: the string to be printed
*
* Return: the lengthof string
*/

int _printf(const char *format, ...)
{
	int i = 0;
	va_list arguments;

	print_t prints[] = {
		{"%s", printf_str}, {"%c", printf_c}, {"%d", printf_int}, {"%i", printf_int}
	};
	int printedlength = 0;
	va_start(arguments, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	while (format[i] != '\0')
	{
		unsigned long int j = 0;
		int specifierfound = 0;

		while (j < (sizeof(prints) / sizeof(print_t)))
		{
			if (prints[j].specifier[0] == format[i] &&
					prints[j].specifier[1] == format[i + 1])
			{
				printedlength += prints[j].print_function(arguments);
				specifierfound = 1;
				i += 2;
				break;
			}
			j++;
		}
		if (!specifierfound)
		{
			_putchar(format[i]);
			printedlength++;
			i++;
		}
	}
	va_end(arguments);
	return (printedlength);
}
