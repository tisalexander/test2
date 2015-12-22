#include "random.h"

void randomize(unsigned int seed, int *array, int count)
{
    int i = 0;
    srand(seed);

    for (i = 0; i < count; i++) {
        array[i] = rand();
    }
}
