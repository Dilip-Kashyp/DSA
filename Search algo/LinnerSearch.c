#include <stdio.h>

int LinearSearch(int arr[], int length, int target) {
    int i;
    for (i = 0; i < length; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {55, 34, 65, 23, 67, 87, 34};
    int length = sizeof(arr) / sizeof(arr[0]);
    int result = LinearSearch(arr, length, 67);
    if (result != -1) {
        printf("Element found at index: %d\n", result);
    } else {
        printf("Element not found\n");
    }
    return 0;
}
