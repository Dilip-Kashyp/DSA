#include <stdio.h>
#include <conio.h>

void BubbleSort(int arr[], int n){
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
};

int main(){
    int arr[] = {45, 63, 21, 88, 42,5,34,1,1,0,786,45
    ,33};
    int lenght = sizeof(arr) / sizeof(arr[0]);
    BubbleSort(arr, lenght);
    printf("Sorted array: \n");
    for (int i=0; i < lenght; i++)
        printf("%d | ", arr[i]);
    printf("\n");

    return 0;
}