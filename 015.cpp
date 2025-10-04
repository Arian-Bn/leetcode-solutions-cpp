#include <iostream>

using namespace std;

// Two Sum (LeetCode #1)
// Условие (на русском):
// Дан массив целых чисел nums и целое число target. Нужно найти два числа в
// массиве, которые в сумме дают target, и вернуть их индексы.
//
//     Гарантируется, что есть ровно одно решение.
//     Можно использовать один и тот же элемент массива только один раз.
//   Вход: nums = [2, 7, 11, 15], target = 9
//   Выход: [0, 1]
//   Объяснение: nums[0] + nums[1] = 2 + 7 = 9 → индексы 0 и 1.

int main() {
  int nums[] = {2, 7, 11, 15};
  int target = 9;
  const int SIZE = sizeof(nums) / sizeof(nums[0]);

  for (int i = 0; i < SIZE - 1; i++) {
    for (int j = i + 1; j < SIZE; j++) {
      if (nums[i] + nums[j] == target) {
        cout << "[" << i << ", " << j << "]" << endl;
        return 0;
      }
    }
  }

  return 0;
}
