//*****************QUICK SORT**********************

//AUTHOR: YOGESH S 1GA22AI063
//DATE:17/07/2024 11:30AM
//MODIFIED DATE: 17/07/2024
//************************************************

/*
START CODE
------------------------------------------
*/
#include <stdio.h>
#include <time.h>

// Function to swap two elements
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to partition the array and return the pivot index
int partition(int arr[], int low, int high) {
    int pivot = arr[high];  // Pivot element (last element in the array)
    int i = (low - 1);      // Index of smaller element

    for (int j = low; j <= high - 1; j++) {
        // If current element is smaller than or equal to pivot
        if (arr[j] <= pivot) {
            i++;    // Increment index of smaller element
            swap(&arr[i], &arr[j]);  // Swap the elements at i and j
        }
    }
    swap(&arr[i + 1], &arr[high]);  // Swap the pivot element with the element at (i + 1)
    return (i + 1);  // Return the pivot index
}

// Function to implement Quick Sort
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // pi is the partitioning index, arr[p] is now at right place
        int pi = partition(arr, low, high);

        // Separately sort elements before partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
   printf("*****QUICK SORT*****\n");
    printf("AUTHOR: Yogesh S \n");
    printf("DATE: 17/7/2024\n");
    printf("****************\n\n");int arr[100],n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Entered Array is: \n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }


    clock_t start, end;
    double cpu_time_used;

    start = clock();
    quickSort(arr, 0, n - 1);
    end = clock();

    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

    printf("Sorted array: \n");
    printArray(arr, n);

    printf("Time taken: %f seconds\n", cpu_time_used);

    return 0;
}
/*
END CODE
---------------------------------------
*/
