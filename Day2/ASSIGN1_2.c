
// 1. linear search using recursive.
#include <stdio.h>

// Recursive function for linear search
int linearSearch(int arr[], int size, int key) {
    // Base case: if size is 0, the key is not found
    if (size == 0) {
        return -1;
    }

    // If the current element matches the key, return its index
    if (arr[size - 1] == key) {
        return size - 1;
    }

    // Recursively search in the remaining array
    return linearSearch(arr, size - 1, key);
}

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 10;

    int result = linearSearch(arr, size, key);
    if (result != -1) {
        printf("Element is present at index %d\n", result);
    } else {
        printf("Element is not present in array\n");
    }

    return 0;
}

