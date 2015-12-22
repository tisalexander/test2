#include <stdio.h>
#include <stdlib.h>
#include "random.h"

int main(int argc, char **argv)
{
    int i = 0;
    int count = atoi(argv[1]);

    printf("Arguments count: %d\n", argc);
    printf("Argument value: %d\n", count);

    int *array = (int *)malloc(sizeof(int) * count);

    randomize(1, array, count);

    for (i = 0; i < count; i++) {
        printf("%d\n", array[i] % 100);
    }
}
