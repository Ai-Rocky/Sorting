#include <stdio.h>

// define the partition function
int partition (int arr[], int left, int right)
{
    // variable declaration
    int i = left, j, temp;
    int pivot = arr[right];

    // traversing data list
    for (j = left; j <= right; j++)
    {
        // place in middle of list of pivot value
        if (arr[j] <= pivot)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
        }
    }
    return (i-1);
}

// define the quick-sort function
void quickSort(int arr[], int left, int right)
{
    if (left < right)
    {
        // find the pivot value
        int pivot = partition(arr, left, right);

        // sorting left side data from pivot
        quickSort(arr, left, pivot - 1);

        // sorting right side data from pivot
        quickSort(arr, pivot + 1, right);
    }
}

void main ()
{
    // variable declaration
    int i, n = 5, arr[] = {5, 1, 4, 2, 3};

    // call the quick-sort function
    quickSort(arr, 0, n-1);

    // print the sorted list
    printf("\tThe sorted list are: ");
    for(i=0; i<n; i++)
        printf(" %d",arr[i]);

    printf("\n");
}

