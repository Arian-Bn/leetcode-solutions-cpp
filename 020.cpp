#include <iostream>

// LeetCode 303. Range Sum Query - Immutable
//
// Описание:
// Создай класс, который хранит массив чисел и быстро вычисляет сумму элементов
// между индексами.
//
// Что нужно:
//
//     Конструктор, принимающий массив
//
//     Метод sumRange(left, right), возвращающий сумму элементов от left до
//     right

class RangeSum {
private:
  int *arrayNum;
  int size;

public:
  RangeSum(int *newArray, int newSize) : size(newSize) {
    arrayNum = new int[size];
    for (unsigned i = 0; i < size; i++)
      *(arrayNum + i) = *(newArray + i);
  }

  ~RangeSum() { delete[] arrayNum; }

  int sumRange(int left, int right) const {
    int sum = 0;

    if (left >= 0 && right >= 0 && left < size && right < size) {

      for (unsigned i = left; i <= right; i++) {
        sum += arrayNum[i];
      }

      return sum;
    } else {
      throw std::out_of_range("Invalid indices");
    }
  }
};

int main() {
  int arrayNum[] = {1, 2, 3, 4, 5, 6, 7};
  int size = 7;

  RangeSum num_1{arrayNum, size};
  num_1.sumRange(2, 5);

  std::cout << "Сумма элементов между индексами: " << num_1.sumRange(2, 5)
            << std::endl;

  return 0;
}
