#include<stdio.h>

// define the merge function
void merge(int arr[], int left, int mid, int right)
{
    // variable declaration
    int i = left, j = mid + 1;
    int k = 0, p, temp[right-left+1];

    // store the sorted list in temporary list
    for (p=left; p<=right; p++)

        if (i > mid)
            temp[k++] = arr[j++];

        else if (j > right)
            temp[k++] = arr[i++];

        else if(arr[i] < arr[j])
            temp[k++] = arr[i++];

        else
            temp[k++] = arr[j++];


    // store the temporary list in main list
    for (i=0; i<k; i++)
        arr[left++] = temp[i];
}

// define the merge-sort function
void mergeSort(int arr[], int left, int right)
{
    if (left < right)
    {
        // find the middle position
        int mid = ( left + right ) / 2;

        // sorting left side data from middle
        mergeSort(arr, left, mid);

        // sorting right side data from middle
        mergeSort(arr, mid+1, right);

        // merge the two sorted list left and right
        merge(arr, left, mid, right);
    }
}

void main()
{
    // variable declaration
    int i, n = 5, arr[] = {5, 1, 4, 2, 3};

    // call the merge-sort function
    mergeSort(arr, 0, n-1);

    // print the sorted list
    printf("\tThe sorted list are: ");
    for(i=0; i<n; i++)
        printf(" %d",arr[i]);

    printf("\n");
}
