#include <stdio.h>
int binarySearch(int *arr, int length, int target)
{
    int l = 0, h = length - 1, mid;
    while (l <= h)
    {
        mid = (l + h) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }

        if (arr[mid] < target)
        {
            l = mid + 1;
        }
        else
        {
            h = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 4, 7, 8, 10};
    int tests[21][2] = {{-10, -1}, {-9, -1}, {-8, -1}, {-7, -1}, {-6, -1}, {-5, -1}, {-4, -1}, {-3, -1}, {-2, -1}, {-1, -1}, {0, -1}, {1, 0}, {2, 1}, {3, -1}, {4, 2}, {5, -1}, {6, -1}, {7, 3}, {8, 4}, {9, -1}, {10, 5}};
    int length = sizeof(arr) / sizeof(arr[0]);
    int tests_length = sizeof(tests) / sizeof(tests[0]);
    printf("Running tests\n");
    for(int i=0; i < 21; i++)
    {   
        printf("-----------------------------------------------\n");
        printf("Running tests for binary search using target %d\n", tests[i][0]);
        int result = binarySearch(arr, length, tests[i][0]);
        if (result == tests[i][1])
        {
            printf("%d test pass\n", result);
        }
        else
        {
            printf("test fail expected %d but got %d\n",tests[i][1], result);
        }
    }
    return 0;
}