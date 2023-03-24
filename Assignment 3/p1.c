#include <stdio.h>
#include <stdlib.h>

#define ASCENDING 1
#define DESCENDING 0

int* sortAscending(int arr[], int size) {
    int i, j, temp;

    for (i = 0; i < size - 1; i++) {
        for (j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    return arr;
}

int* sortDescending(int arr[], int size) {
    int i, j, temp;

    for (i = 0; i < size - 1; i++) {
        for (j = i + 1; j < size; j++) {
            if (arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    return arr;
}

int main() {
    int arr[100], size, i;
    int* sorted_arr;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

#ifdef ASCENDING
    sorted_arr = sortAscending(arr, size);
#elif defined DESCENDING
    sorted_arr = sortDescending(arr, size);
#endif

    printf("Sorted array:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", sorted_arr[i]);
    }
    printf("\n");

    return 0;
}
