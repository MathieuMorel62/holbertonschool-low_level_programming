#include <stdio.h>
#include <stdlib.h>

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
		scanf("%d", &choice);

		if (choice < 0 || choice > 4)
			printf("Invalid choice\n");
		else if (choice == 0)
			break;
		else if (choice == 1)
		{
			printf("A: ");
			scanf("%d", &num1);
			printf("B: ");
			scanf("%d", &num2);
			printf("Result: %d\n", num1 + num2);
		}
		else if (choice == 2)
		{
			printf("A: ");
			scanf("%d", &num1);
			printf("B: ");
			scanf("%d", &num2);
			printf("Result: %d\n", num1 - num2);
		}
		else if (choice == 3)
		{
			printf("A: ");
			scanf("%d", &num1);
			printf("B: ");
			scanf("%d", &num2);
			printf("Result: %d\n", num1 * num2);
		}
		else if (choice == 4)
		{
			printf("A: ");
			scanf("%d", &num1);
			printf("B: ");
			scanf("%d", &num2);

			if (num2 == 0)
				printf("Error: division by zero\n");
			else
				printf("Result: %.1f\n", (double)num1 / (double)num2);
		}
	}
	printf("Bye!\n");
	return (0);
}
