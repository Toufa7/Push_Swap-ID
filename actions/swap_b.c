#include "actions.h"

// Creat a node
// give it the head of the list
// Now since the head is empty so store in it the next content
// Finaly assign the newnode to point to NULL


// In this case the code to swap two top elements
// is the same as for swapping two elements in an array: 
//     T temp = stack[topIndex];
//     stack[topIndex] = stack[topIndex - 1];
//     stack[topIndex - 1] = temp;


void    swap_b(t_list   **stack_b)
{
    t_list  *temp;

	if (ft_nodesize(*stack_b) > 1)
    {
        temp = *stack_b;
        *stack_b = (*stack_b)->next;
        temp->next = (*stack_b)->next;
        (*stack_b)->next = temp;
    }
}

/*  Swap the first 2 elements at the top of stack b Do nothing if there is only one or no elements. */