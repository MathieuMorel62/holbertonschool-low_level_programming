#include "main.h"

int main(int argc, char *argv[])
{
    int num1, num2, result, len1, len2;
    char *resultStr;

    if (argc != 3)
    {
        printf("Error\n");
        exit(98);
    }
    num1 = atoi(argv[1]);
    num2 = atoi(argv[2]);
    result = num1 * num2;

    len1 = snprintf(NULL, 0, "%d", num1);
    len2 = snprintf(NULL, 0, "%d", num2);
    resultStr = malloc((len1 + len2 + 1) * sizeof(char));
    if (resultStr == NULL)
    {
        printf("Error\n");
        exit(98);
    }

    sprintf(resultStr, "%d", result);
    printf("%s\n", resultStr);

    free(resultStr);
    return (0);
}
