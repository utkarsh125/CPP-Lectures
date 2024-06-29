#include <iostream>
using namespace std;

void merge(int* arr, int start, int end) {
    int mid = start + (end - start) / 2;

    int len1 = mid - start + 1;
    int len2 = end - mid;

    int* left = new int[len1];  // array for left half
    int* right = new int[len2]; // array for right half

    // Copy left array values
    int k = start;
    for(int i = 0; i < len1; i++) {
        left[i] = arr[k++];
    }

    // Copy right array values
    k = mid + 1;
    for(int i = 0; i < len2; i++) {
        right[i] = arr[k++];
    }

    // Merge logic
    int leftIndex = 0;
    int rightIndex = 0;
    int mainArrayIndex = start;

    while(leftIndex < len1 && rightIndex < len2) {
        if(left[leftIndex] < right[rightIndex]) {
            arr[mainArrayIndex++] = left[leftIndex++];
        } else {
            arr[mainArrayIndex++] = right[rightIndex++];
        }
    }

    // Copy remaining elements of left array
    while(leftIndex < len1) {
        arr[mainArrayIndex++] = left[leftIndex++];
    }

    // Copy remaining elements of right array
    while(rightIndex < len2) {
        arr[mainArrayIndex++] = right[rightIndex++];
    }

    // Delete dynamically allocated arrays
    delete[] left;
    delete[] right;
}

void mergeSort(int* arr, int start, int end) {
    // Base case
    if(start >= end) {
        return;
    }

    int mid = start + (end - start) / 2;
    // Sort left half
    mergeSort(arr, start, mid);

    // Sort right half
    mergeSort(arr, mid + 1, end);

    // Merge sorted halves
    merge(arr, start, end);
}

int main() {
    int arr[] = {38, 27, 43, 3, 9, 20};
    int n = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, n - 1);

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
