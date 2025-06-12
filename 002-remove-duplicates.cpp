/**
* LeetCode Problem #2: Remove Duplicates from Sorted Array
 *
 * Given a sorted array nums, remove the duplicates in-place such that each element
 * appears only once and returns the new length. The relative order of elements should
 * be kept the same.
 *
 * Since modifying the array in-place is required, space must be used in O(1) complexity.
 *
 * Example:
 * Input: nums = [1, 1, 2]
 * Output: 2, and nums = [1, 2, ...]
 * Explanation: The function should return length = 2, with the first two elements
 * being 1 and 2 respectively. It doesn't matter what values are set beyond the returned length.
 */

#include <iostream>

using namespace std;

/**
 * Removes duplicates from a sorted array in-place.
 *
 * @param arr  - input sorted array
 * @param size - size of the array
 * @return     - new length of the array without duplicates
 */
int removeDoplicates(int arr[], int size) {
    if (size == 0) return 0;

    int i = 0;

    for (int j = 1; j < size; j++) {
        if (arr[i] != arr[j]) {
            i++;
            arr[i] = arr[j];
        }

    }

    return i + 1;
}

int main () {
    int arr[] = {1, 1, 2, 2, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int newLength = removeDoplicates (arr, size);

    cout << "New length: " << newLength << endl;
    cout << "Unique elements: ";
    for (int i = 0; i < newLength; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}