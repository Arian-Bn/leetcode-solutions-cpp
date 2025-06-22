#include <iostream>
using namespace std;

/**
 * LeetCode Problem #3: Reverse String (simplified for array)
 *
 * Given an array of integers, reverse the array in-place.
 *
 * Example:
 * Input: arr = [1, 2, 3, 4, 5]
 * Output: arr = [5, 4, 3, 2, 1]
 */

/**
 * Reverses an array in-place.
 *
 * @param arr  - input array
 * @param size - size of the array
 */

void reverseArray(int arr[], int size) {
    int start = 0;          // Start index
    int end = size - 1;     // End index

    while (start < end) {
        // Swap elements at start and end
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move elements towards center
        start++;
        end--;
    }
}

int main () {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    reverseArray(arr, size);

    cout << "Reverse array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}