#include <stdio.h>
#include <stdlib.h> // for dynamic memory ---> maloc and free

// Represents a node
typedef struct node 
{
    int number;
    struct node *next;
}
node;

int main(void)
{
    // List of size 0
    node *list = NULL;

    // Add number to list
    node *n = malloc(sizeof(node));
    if(n == NULL) 
    {
        return 1;
    }
    n->number = 1;
    n->next = NULL;
    list =n;

    //Add number to list
    n = malloc(sizeof(node)); // reusing temporary variable n. now it gives different address with malloc
    if(n == NULL) {
        return 1;
    }
    n->number = 2;
    n->next =NULL;
    list->next = n;

    //Add number to list
    n = malloc(sizeof(node));
    if (n == NULL)
    {
        return 1;
    }
    n->number = 3;
    n->next = NULL;
    list->next->next = n;

    //Print list
    for(node *tmp = list; tmp != NULL; tmp = tmp->next)
    {
        printf("%i\n", tmp->number );
    }

    // free list
    while(list != NULL)  
    {
        node *tmp = list->next;
        free(list);
        list = tmp;
    }


}