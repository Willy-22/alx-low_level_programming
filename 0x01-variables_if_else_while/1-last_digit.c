#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - generate random
 * Return: 0 Eachtime
 */

int main(void)
{
    int n;
    int w;

    srand(time(0));
    n = rand() - RAND_MAX / 2;
    w = n % 10;
    if (w > 5)
        printf("last digit of %d is %d and is greater than 5\n", n, w);
    if (w == 0)
        printf("last digit of %d is %d and is 0\n", n, w);
    if (w < 6 && w != 0)
        printf("last digit of %d is %d and is less than 6 and not 0\n", n, w);
    return (0);
}

