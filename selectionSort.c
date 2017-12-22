#include <stdio.h>

void main ()
{
    // variable declaration
    int n = 5, data[] = {5, 1, 4, 2, 3};
    int i, j, temp, min = 0;

    // Traversing data list outer loop
    for (i=0; i<n-1; i++)
    {
        // Traversing data list inner loop
        for (j=i; j<n; j++)

            // find the minimum data from list
            if (data[min] > data[j])
                min = j;

        // swap the minimum data in right position
        temp = data[i];
        data[i] = data[min];
        data[min] = temp;
    }

    // print the sorted list
    printf("\tThe sorted list are: ");
    for(i=0; i<n; i++)
        printf(" %d",data[i]);

    printf("\n");
}
