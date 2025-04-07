#include <stdio.h>

// Function to reverse elements in the array from start to end
void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

// Function to rotate the array to the right by k positions
void rotateRight(int arr[], int n, int k) {
    k = k % n; // Normalize k if it's greater than n

    // Reverse the whole array
    reverse(arr, 0, n - 1);
    // Reverse the first k elements
    reverse(arr, 0, k - 1);
    // Reverse the remaining elements
    reverse(arr, k, n - 1);
}

int main() {
    int n, k;
    
    // Input size of array
    scanf("%d", &n);
    int arr[n];
    
    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input number of positions to rotate
    scanf("%d", &k);

    // Perform rotation
    rotateRight(arr, n, k);

    // Output rotated array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
