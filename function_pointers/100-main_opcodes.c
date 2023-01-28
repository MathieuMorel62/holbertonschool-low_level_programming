#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int nb_bytes, i;

    if (argc != 2)
    {
        printf("Error\n");
        return 1;
    }
    nb_bytes = atoi(argv[1]);
    if (nb_bytes < 0)
    {
        printf("Error\n");
        return 2;
    }
    for (i = 0; i < nb_bytes; i++)
    {
        printf("%.2x ", *(unsigned char*)(main+i));
    }
    printf("\n");
    return 0;
}
