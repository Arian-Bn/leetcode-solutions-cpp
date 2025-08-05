#include <iostream>

using namespace std;

/**
 * LeetCode Problem #8: Shuffle the Array.
 * Given an array of the form [x0, x1, ..., xn-1, y0, y1, ..., yn-1],
 * shuffle it to produce [x0, y0, x1, y1, ..., xn-1, yn-1].
 *
 * @param arr  - input array of 2n integers
 * @param n    - number of pairs (half the size of the array)
 * @return     - pointer to a new dynamically allocated shuffled array
 */

void fillArr (int *arr, const int size) {
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
}

int* shufArr (const int* arr, const int n) {
    int *newArr = new int [n*2];
    for (int i = 0; i < n; i++) {
        newArr[i*2] = arr[i];
        newArr[i*2+1] = arr[i+n];
    }
    return newArr;
}

void printArr (const int* const arr, const int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << "\t";
    }
    cout << endl;
}

int main() {
    int n;

    cout << "Enter n (number of pairs): ";
    while (true) {
        if (cin >> n && n > 0) break;
        cout << "Please enter a positive number: ";
        cin.clear();
        cin.ignore(10000, '\n');
    }

    int *arr = new int [n*2];
    fillArr(arr, n*2);

    int *shuffled = shufArr(arr, n);
    printArr(shuffled, n*2);

    delete[] arr;
    arr = nullptr;
    delete[] shuffled;
    shuffled = nullptr;

    return 0;
}