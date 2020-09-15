#include "cs50.h"
#include <stdio.h>

void draw(int h);

int main(void)
{
    //int height = get_int("Height: ");

    int height = 4;
    draw(height);
}

void draw(int h)
{
#
    if (h == 0)
    {
        return;
    }
# recursive function that takes care of the smaller subset 
# of the larger problem that is solved after the call below
    draw(h - 1);
#
    for (int i = 1; i <= h; i++)
    {
        printf("#");
    }
    printf("\n");
}