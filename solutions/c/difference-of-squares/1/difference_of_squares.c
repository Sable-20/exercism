#include "difference_of_squares.h"


unsigned int sum_of_squares(unsigned int number)
{
    unsigned int x = 0;
    for (unsigned int i = 1; i <= number; i++)
    {
        x += pow(i, 2);
    }

    return x;
}

unsigned int square_of_sum(unsigned int number)
{
    unsigned int x = 0;
    for (unsigned int i = 1; i <= number; i++)
    {
        x += i;
    }
    return pow(x,2);
}

unsigned int difference_of_squares(unsigned int number)
{
    return (unsigned int)(square_of_sum(number) - sum_of_squares(number));
}