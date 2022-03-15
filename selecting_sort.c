#include "push_swap.h"

void swap(int *x, int* y)
{
    int tmp;

    tmp = *x;
    *x = *y;
    *y = tmp;
}
 
int     *selectionsort(int arr[], int n)
{
    int i;
    int j;
    int min;

    i = 0;
    min = arr[0];
    while (i < n)
    {
        j = i + 1;
        while (j < n)
        {
            if (arr[j] < arr[i])
            {
                swap(&arr[j], &arr[i]);
            }
            min = arr[j];
            j++;
        }
        i++;
    }
    // i = 0;
    // while (i < n)
    // {
    //     printf("|%d| -- |%d|\n",i, arr[i]);
    //     i++;
    // }
    return (arr);
}