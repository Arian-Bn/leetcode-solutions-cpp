#include <iostream>

using namespace std;

/**
 * LeetCode Problem #7: Sum without min and max.
 * Calculates the sum of all elements in an array,
 * excluding one occurrence of the minimum and maximum values.
 *
 * @param arr  - input array of integers
 * @param size - number of elements in the array
 * @return     - sum without one min and one max
 */

int sumWithoutMinAndMax(const int arr[], const int size);

int main() {
    int arr[] = {6, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Sum without min and max: " << sumWithoutMinAndMax(arr, size) << endl;

    return 0;
}

int sumWithoutMinAndMax(const int arr[], const int size) {
    if (size <= 2) return 0; // No elements left after removing min and max

    int min = arr[0];
    int max = arr[0];

    // Find min and max values in array
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i]; // Update min
        }
        if (arr[i] > max) {
            max = arr[i]; // Update max
        }
    }

    bool skipMinFound = false;
    bool skipMaxFound = false;
    int sum = 0;

    // Sum all elements, skipping first occurrence of min and max
    for (int i = 0; i < size; i++) {
        if (!skipMinFound && arr[i] == min) {
            skipMinFound = true; // Skip first min
        }
        else if (!skipMaxFound && arr[i] == max) {
            skipMaxFound = true; // Skip first max
        }
        else {
            sum += arr[i]; // Add to total sum
        }
    }

    return sum;
}