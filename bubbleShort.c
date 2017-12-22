#include <stdio.h>

void main ()
{
    // variable declaration
    int n = 5, data[] = {5, 1, 4, 2, 3};
    int i, j, temp;

    // Traversing data list outer loop
    for(i=0; i<n; i++)

        // Traversing data list inner loop
        for(j=0; j<n-1; j++)

            // Check if data left is greater than data right
            if(data[j] > data[j+1])
            {
                temp = data[j];
                data[j] = data[j+1];
                data[j+1] = temp;
            }

    // print the sorted list
    printf("\tThe sorted list are: ");
    for(i=0; i<n; i++)
        printf(" %d",data[i]);

    printf("\n");
}

