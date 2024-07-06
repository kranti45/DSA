//1. Implement linear search and binary search using recursion.

#include <stdio.h>

// Recursive function for binary search
int binarySearch(int arr[], int left, int right, int key) {
    // Base case: if left index exceeds right index, the key is not found
    if (left > right) {
        return -1;
    }

    // Calculate the middle index
    int mid = left + (right - left) / 2;

    // If the middle element matches the key, return its index
    if (arr[mid] == key) {
        return mid;
    }

    // If the key is smaller than the middle element, search the left subarray
    if (arr[mid] > key) {
        return binarySearch(arr, left, mid - 1, key);
    }

    // If the key is larger than the middle element, search the right subarray
    return binarySearch(arr, mid + 1, right, key);
}

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 10;

    int result = binarySearch(arr, 0, size - 1, key);
    if (result != -1) {
        printf("Element is present at index %d\n", result);
    } else {
        printf("Element is not present in array\n");
    }

    return 0;
}

