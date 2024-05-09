#include <stdio.h>
#include <stdlib.h>

int binarySearch(int arr[], int length, int target) {
    int start = 0;
    int end = length - 1; 
    while (start <= end) {
        int mid = (start + end) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return -1;
}

int array(int arr[], int *length) {
    int i;

    printf("---------------------------------------\n");
    printf("Enter Array Elements: \n");
    for (i = 0; i < *length; i++) {
        printf("Enter %d Element: ", i);
        scanf("%d", &arr[i]);
    }
    printf("---------------------------------------\n");

    printf("Entered Array is: ");
    for (i = 0; i < *length; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n---------------------------------------\n");

    return *length;
}

int main() {
    int *arr;
    int length, target;

    printf("Binary Search Program\n");

    printf("\nEnter the size of the array: ");
    scanf("%d", &length);

    arr = (int*)malloc(length * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    array(arr, &length);
    
    printf("\nEnter the element you want to find: ");
    scanf("%d", &target); 
    printf("\n---------------------------------------\n");

    int result = binarySearch(arr, length, target);
    if (result == -1) {
        printf("Target not found.");
    } else {
        printf("Target is at index: %d", result);
    }
    printf("\n---------------------------------------\n");

    free(arr);
    return 0;
}
