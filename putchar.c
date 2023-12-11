#include <unistd.h>
/**
 * _putchar - simmilar to printf prints  user input
 * @c: input by user in character format
 * Return: 1 on success or -1 otherwise
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
