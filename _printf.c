#include "main.h"

/**
 * print_buffer_content - Prints the contents of buffer if found.
 * @buffer: Char array.
 * @buff_ind: Next char index used as length.
 * Return: No value.
 */
void print_buffer_content(char buffer[], int *buff_ind)
{
	if (*buff_ind > 0)
		write(1, &buffer[0], *buff_ind);
	*buff_ind = 0;
}

/**
 * _printf - Printf function.
 * @format: Specified format.
 * Return: Printed chars.
 */
int _printf(const char *format, ...)
{
	int flags, word_width, sp_precision, word_size, buff_ind = 0;
	int i = 0, printed_flag = 0, chars_printed = 0;
	char buffer[BUFF_SIZE];
	va_list list_ptr;

	if (format == NULL)
		return (-1);
	va_start(list_ptr, format);

	while (format && format[i] != '\0')
	{
		if (format[i] != '%')
		{
			buffer[buff_ind++] = format[i];
			if (buff_ind == BUFF_SIZE)
				print_buffer_content(buffer, &buff_ind);
			chars_printed++;
		} else
		{
			print_buffer_content(buffer, &buff_ind);
			flags = get_flags(format, &i);
			word_width = get_width(format, &i, list_ptr);
			sp_precision = get_precision(format, &i, list_ptr);
			word_size = get_size(format, &i);
			++i;
			printed_flag = handle_print(format, &i, list_ptr, buffer, flags,
					word_width, sp_precision, word_size);
			if (printed_flag == -1)
				return (-1);
			chars_printed += printed_flag;
		}
		i++;
	}
	print_buffer_content(buffer, &buff_ind);
	va_end(list_ptr);
	return (chars_printed);
}
