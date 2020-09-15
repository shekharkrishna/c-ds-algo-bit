#include <stdio.h>
#include <stdlib.h>

    int
    main(void)
{
    //mimicking an array that was sized 3
    //int list[3]; this is fixed

    int *list = malloc(3 * sizeof(int)); 
    if (list == NULL) // best practice is the check if you gotten
    {
        return 1; // something went wrong! the computer is out of memory for some reason!
    }

    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    // Say for instance, if we want another integer,
    // we want to resize that array!! How would we do it?

    //int *tmp = malloc(4 * sizeof(int));
    int *tmp = realloc(list, 4 * sizeof(int));
    if (tmp == NULL)
    {
        return 1;
    }

    list = tmp;


    // we can move the array named "list" to array named "tmp"
    // Real: Copy integers from old array to new array
    //for (int i = 0; i < 4; i++)
    //{
      //  tmp[i] = list[i];
   // }

    tmp[3] = 4;

    free(list);

    // after freeing, lets reuse the list pointer

    list = tmp;

    for (int i = 0; i < 4; i++)
    {
        printf("LIST: %i\n", list[i]);
    }

    free(list);
}