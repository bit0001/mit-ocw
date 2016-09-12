#include <iostream>
#include "singly_linked_list.h"

#define NUMBER_OF_VALUES 5

int main()
{
    int values[NUMBER_OF_VALUES] = {1, 0, -1, 5, 10};
    node_t* head;

    for (int i = 0; i < NUMBER_OF_VALUES; i++) {
      head = insert_value(values[i], head);
    }

    print_singly_linked_list(head);

    return 0;
}
