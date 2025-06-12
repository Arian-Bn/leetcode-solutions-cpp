/**
* LeetCode Problem #1: Two Sum
 *
 * Given an array of integers nums and an integer target, return the indices
 * of two numbers such that they add up to the target.
 *
 * You may assume that each input would have exactly one solution, and you
 * may not use the same element twice.
 *
 * Example:
 * Input: nums = [2, 7, 11, 15], target = 9
 * Output: [0, 1]
 * Explanation: nums[0] + nums[1] = 9
 */

#include <iostream>

using namespace std;

/**
 * Finds two indices in the array such that their values add up to the target.
 * Prints the result and exits after finding the first valid pair.
 *
 * @param arr    - input array
 * @param size   - size of the array
 * @param target - desired sum
 */
void twoSum (int arr[], const int size, int target);

int main () {

    const int SIZE = 4;
    int arr[SIZE] = {2, 7, 11, 15};
    int target = 9;

    twoSum(arr, SIZE, target); // Call the function
    return 0;
}

//Function finds two elements in the array whose sum equals the target.
void twoSum (int arr[], const int size, int target) {
    // Loop through all pairs of elements (i, j), where j > i
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            // Check if the sum of arr[i] and arr[j] equals target
            if (arr[i] + arr[j] == target) {
                // Print the result and exit function immediately
                cout << "Indexes: " << i << " and " << j << endl;
                return;
            }
        }
    }
}