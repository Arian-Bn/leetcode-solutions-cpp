#include <iostream>

using namespace std;

// #136. Single Number
//
// Условие:
// Дан непустой массив целых чисел nums, в котором каждый элемент встречается
// дважды, кроме одного.
//
// Найди этот уникальный элемент.
//     Должен решить задачу линейно и без дополнительной памяти (но для начала
//     подойдёт и простое решение с циклами). Input: nums = [4, 1, 2, 1, 2]
//     Output: 4

int main() {
  int arr[]{4, 1, 2, 1, 2};
  int n = sizeof(arr) / sizeof(arr[0]);

  for (unsigned i = 0; i < n; i++) {
    unsigned k = 0;
    for (unsigned j = 0; j < n; j++) {
      if (arr[i] == arr[j]) {
        k++;
      }
    }
    if (k == 1) {
      cout << arr[i] << endl;
      return 0;
    }
  }

  return 0;
}
