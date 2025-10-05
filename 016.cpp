#include <iostream>

using namespace std;

//
// #167. Two Sum II – Input Array Is Sorted
//
// Условие:
// Дан отсортированный массив целых чисел и целое число target. Найди два числа,
// которые в сумме дают target, и верни их индексы (нумерация с 1!).
//
// Пример:
//
// Input: numbers = [2, 7, 11, 15], target = 9
// Output: [1, 2]  // потому что 2 + 7 = 9, и индексы 1 и 2 (не 0 и 1!)

int main() {
  int numbers[]{2, 7, 11, 15};
  int target{9};

  for (int i = 0; i <= size(numbers) - 1; i++) {
    for (int j = i; j <= size(numbers); j++) {
      if (numbers[i] + numbers[j] == target) {
        cout << "[" << i + 1 << ", " << j + 1 << "]" << endl;
        return 0;
      }
    }
  }
  return 0;
}
