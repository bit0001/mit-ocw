#include <iostream>
#include "singly_linked_list.h"

#define NUMBER_OF_VALUES 5

void print_deletion_message(bool succeeded);

int main()
{
    int values[NUMBER_OF_VALUES] = {1, 0, -1, 5, 10};
    node_t* head;

    for (int i = 0; i < NUMBER_OF_VALUES; i++) {
      head = insert_value(values[i], head);
    }

    print_singly_linked_list(head);

    int succeeded;

    head = delete_value(0, head, &succeeded);
    print_deletion_message(succeeded);
    print_singly_linked_list(head);
    head = delete_value(10, head, &succeeded);
    print_deletion_message(succeeded);
    print_singly_linked_list(head);
    head = delete_value(9, head, &succeeded);
    print_deletion_message(succeeded);
    print_singly_linked_list(head);
    head = delete_value(1, head, &succeeded);
    print_deletion_message(succeeded);
    print_singly_linked_list(head);

    return 0;
}

void print_deletion_message(bool succeeded)
{
    if (succeeded) {
        puts("Deletion successful!");
    } else {
        puts("Deletion unsuccessful!");
    }
}
