#include "push_swap.h"

// Creat a node
// give it the head of the list
// Now since the head is empty so store in it the next content
// Finaly assign the newnode to point to NULL



// In this case the code to swap two top elements
// is the same as for swapping two elements in an array: 
//     T temp = stack[topIndex];
//     stack[topIndex] = stack[topIndex - 1];
//     stack[topIndex - 1] = temp;


void    swap_a(t_list   **stack_a)
{
    t_list  *temp;

    temp = *stack_a;
    *stack_a = (*stack_a)->next;
    temp->next = (*stack_a)->next;
    (*stack_a)->next = temp;
}