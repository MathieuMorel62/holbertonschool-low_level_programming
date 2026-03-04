#include <stdio.h>
#include <stdlib.h>

/**
 * clear_stdin - clear the stdin buffer
 *
 * Return: void
 */
static void clear_stdin(void)
{
	int c;

	while ((c = getchar()) != '\n' && c != EOF)
		;
}

/**
 * main - entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
	int choice;
	int num1, num2;

	printf("Simple Calculator\n");
	printf("1) Add\n");
	printf("2) Subtract\n");
	printf("3) Multiply\n");
	printf("4) Divide\n");
	printf("0) Quit\n");

	while (1)
	{
		printf("Choice: ");
		if (scanf("%d", &choice) != 1)
		{
			clear_stdin();
			printf("Invalid choice\n");
			continue;
		}
		if (choice < 0 || choice > 4)
			printf("Invalid choice\n");
		else if (choice == 0)
			break;
		else if (choice == 1)
		{
			while (1)
			{
				printf("A: ");
				if (scanf("%d", &num1) == 1)
					break;
				clear_stdin();
				printf("Invalid number\n");
			}
			while (1)
			{
				printf("B: ");
				if (scanf("%d", &num2) == 1)
					break;
				clear_stdin();
				printf("Invalid number\n");
			}
			printf("Result: %d\n", num1 + num2);
		}
		else if (choice == 2)
		{
			while (1)
			{
				printf("A: ");
				if (scanf("%d", &num1) == 1)
					break;
				clear_stdin();
				printf("Invalid number\n");
			}
			while (1)
			{
				printf("B: ");
				if (scanf("%d", &num2) == 1)
					break;
				clear_stdin();
				printf("Invalid number\n");
			}
			printf("Result: %d\n", num1 - num2);
		}
		else if (choice == 3)
		{
			while (1)
			{
				printf("A: ");
				if (scanf("%d", &num1) == 1)
					break;
				clear_stdin();
				printf("Invalid number\n");
			}
			while (1)
			{
				printf("B: ");
				if (scanf("%d", &num2) == 1)
					break;
				clear_stdin();
				printf("Invalid number\n");
			}
			printf("Result: %d\n", num1 * num2);
		}
		else if (choice == 4)
		{
			while (1)
			{
				printf("A: ");
				if (scanf("%d", &num1) == 1)
					break;
				clear_stdin();
				printf("Invalid number\n");
			}
			while (1)
			{
				printf("B: ");
				if (scanf("%d", &num2) == 1)
					break;
				clear_stdin();
				printf("Invalid number\n");
			}
			if (num2 == 0)
				printf("Error: division by zero\n");
			else
				printf("Result: %.1f\n", (double)num1 / (double)num2);
		}
	}
	printf("Bye!\n");
	return (0);
}
