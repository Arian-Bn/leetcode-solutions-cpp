#include <iostream>

using namespace std;

// #26. Remove Duplicates from Sorted Array
//
// Условие:
// Дан отсортированный массив nums. Удали дубликаты на месте так, чтобы каждый
// элемент встречался только один раз. Верни новую длину массива (без
// дубликатов).
//
//     Изменять массив можно только в пределах исходного размера.
//     Нельзя использовать дополнительные массивы.
//
// Input: nums = [1, 1, 2]
// Output: 2  // и первые 2 элемента массива должны быть [1, 2]
//            //
// Input: nums = [0, 0, 1, 1, 1, 2, 2, 3, 3, 4]
// Output: 5  // первые 5 элементов: [0, 1, 2, 3, 4]

int main() {
  const int MAX = 100;
  int arr[MAX];
  size_t size = 0;
  int x;

  cout << "Enter elements(integers)(max 100 el): " << endl;

  while (true) {
    if (!(cin >> x)) {
      cin.clear();
      cin.ignore(1000, '\n');
      cout << "Just integers!" << endl;
      continue;
    }
    if (x == 404)
      break;
    if (size >= MAX) {
      cout << "Max size reached!" << endl;
      break;
    }
    arr[size++] = x;
  }

  if (size == 0) {
    cout << "\nResult:\nsize: 0" << endl;
    return 0;
  }

  size_t k = 1;
  for (size_t i{1}; i < size; i++)
    if (arr[i] != arr[i - 1]) {
      arr[k] = arr[i];
      k++;
    }
  size = k;

  cout << "\nResult:" << endl;
  cout << "Size: " << size << endl;
  for (size_t i{}; i < size; i++) {
    cout << arr[i] << "\t";
  }
  cout << endl;

  return 0;
}
