#include "main.h"

/**
 * print_buffer - that prints a buffer.
 * @b: pointer to the buffer to be printed
 * @size: size of the buffer to be printed
*/

void print_buffer(char *b, int size)
{
	int buffer_index, hex_index, ascii_index;

	if (size <= 0)
		printf("\n");
	else
	{
		for (buffer_index = 0; buffer_index < size; buffer_index += 10)
		{
			printf("%.8x:", buffer_index);
			for (hex_index = buffer_index; hex_index < buffer_index + 10; hex_index++)
			{
				if (hex_index % 2 == 0)
					printf(" ");
				if (hex_index < size)
					printf("%.2x", *(b + hex_index));
				else
					printf("  ");
			}
			printf(" ");
			for (ascii_index = buffer_index; ascii_index < buffer_index + 10; ascii_index++)
			{
				if (ascii_index >= size)
					break;
				if (*(b + ascii_index) < 32 || *(b + ascii_index) > 126)
					printf("%c", '.');
				else
					printf("%c", *(b + ascii_index));
			}
			printf("\n");
		}
	}
}
