#include "main.h"

/**
 * printHex - funtction that print a hexadecimal digit
 * @num: The number of interest
 * @isUppercase: Flag
 */
void printHex(unsigned long int num, int isUppercase)
{
	char *hexDigits = uppercase ? "0123456789ABCDEF" : "0123456789abcdef";
	if (num >= 16)
	printHex(num / 16, isUppercase);

	_putchar(hexDigits[num % 16]);
}

/**
 * printPointer - Prints a pointer address
 * @args: Argument of interest
 * Return: Number of characters printed
 */
int printPointer(va_list args)
{
	unsigned long int pointerAddress = va_arg(args, unsigned long int);
	unsigned long int temp;
	int digitCount = 0, totalCharacters = 0;

	if (pointerAddress == 0)
	{
		return (_printf("%s", "(nil)"));
	}
	else
	{
		_putchar('0');
		_putchar('x');
		totalCharacters += 2;

		temp = pointerAddress;
		for (digitCount = 0; temp != 0; digitCount++)
		temp /= 16;
		totalCharacters += digitCount;

		for (digitCount--; digitCount >= 0; digitCount--)
		printHex((pointerAddress >> (digitCount * 4)) & 0xF, 0);
	}

	return (totalCharacters);
}

