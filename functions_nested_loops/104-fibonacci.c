#include <stdio.h>

/**
 * main - This function prints the first 98 Fibonacci numbers,
 * starting with 1 and 2,followed by a new line. The numbers are
 * separated by a comma and a space.
 *
 * Return: 0 if the function completes successfully
*/

int main(void)
{
	unsigned long int curr_back = 0, curr_front = 0;
	unsigned long int prev_back = 1, prev_front = 2;
	unsigned long int carr_back, carr_front, new_front;
	int count;

	/* Print the first two numbers of the Fibonacci sequence */
	printf("%lu, %lu, ", prev_back, prev_front);

	/* Loop through the first 98 numbers of the Fibonacci sequence */
	for (count = 2; count < 98; count++)
	{
		/**
		* Calculate front and back parts if sum of prev. two numbers is larger
		* than MAX_VALUE or curr_front or curr_back is greater than 0
		*/
		if (prev_back + prev_front > 10000000000 || curr_front > 0 || curr_back > 0)
		{
			carr_front = (prev_back + prev_front) / 10000000000;
			carr_back = (prev_back + prev_front) % 10000000000;

			new_front = curr_back + curr_front + carr_front;
			curr_back = curr_front;
			curr_front = new_front;
			prev_back = prev_front;
			prev_front = carr_back;
			printf("%lu%010lu", curr_front, prev_front);
		}
		else
		{
			/* Otherwise, just calculate the back part of the current number */
			carr_back = prev_back + prev_front;
			prev_back = prev_front;
			prev_front = carr_back;
			printf("%lu", prev_front);
		}
		if (count != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
