#include <stdio.h>

void main ()
{
    // variable declaration
    int n = 5, data[] = {5, 1, 4, 2, 3};
    int i, j, temp;

    // Traversing data list outer loop
    for(i=1; i<n; i++)
    {
        temp = data[i];

        // Traversing inner loop
        // and find the right position of temp
        for(j=i-1; j>=0 && temp < data[j]; j--)
            data[j+1] = data[j];

        data[j+1] = temp;
    }


    // print the sorted list
    printf("\tThe sorted list are: ");
    for(i=0; i<n; i++)
        printf(" %d",data[i]);

    printf("\n");
}
