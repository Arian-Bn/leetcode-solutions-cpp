#include <iostream>

using namespace std;

/**
 * LeetCode Problem #6: sum of unique elements.
 * Calculates the sum of all unique elements in an array.
 *
 * A unique element is defined as one that appears exactly once.
 *
 * @param arr  - input array of integers
 * @param size - number of elements in the array
 * @return     - sum of unique elements
 */

int sizeOfUniqueElements(const int arr[], const int size);

int main() {
    int arr[] = {4, 5, 7, 5, 4, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Sum of unique elements: " << sizeOfUniqueElements(arr, size) << endl;

    return 0;
}

/**
 * Checks each element in the array to see if it's unique.
 * Summarizes the values that appear only once.
 */

int sizeOfUniqueElements(const int arr[], const int size) {
    int sum = 0;
    bool isUnique;

    for (int i = 0; i < size; i++) {
        isUnique = true;

        // Check if arr[i] has duplicates
        for (int j = 0; j < size; j++) {
            if (i != j && arr[i] == arr[j]) {
                isUnique = false;
                break; // No need to check further
            }
        }

        // If no duplicates found, add to sum
        if (isUnique) {
            sum += arr[i];
        }
    }

    return sum;
}
