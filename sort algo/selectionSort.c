#include <stdio.h>
void selectionSort(int arr[], int lenght){
    int j;
    for (int i = 0; i < lenght-1; i++){
        int main = i;
        for ( j = i+1; j < lenght; j++){
            if(arr[j] <= arr[main]){
                main = j;
            }
        }
        // -------- swaping -------------
        int temp = arr[i];
        arr[i] = arr[main];
        arr[main] = temp;
    }
};

int main() {
    int arr[] = {3, 2, 5, 1, 7, 4};
    int target = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, target);
    for (int i = 0; i < target; i++){
        printf("%d | ", arr[i]);
    }
    return 0;
}