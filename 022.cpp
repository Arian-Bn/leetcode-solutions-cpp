#include <algorithm>
#include <iostream>
#include <limits>
#include <string>

class Solution {
public:
  bool isPalindrome(int x) {

    if (x < 0)
      return false;

    std::string str = std::to_string(x);
    std::string reversed_str = str;

    reverse(reversed_str.begin(), reversed_str.end());
    return str == reversed_str;
  }
};

void getNumber(int &number) {
  std::cout << "Введите целое число(от -2^31 до (2^31)-1): ";

  while (true) {
    if (std::cin >> number)
      break;

    else {
      std::cout << "Ошибка! Введите корректное целое число." << std::endl;
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
  }
}

int main() {
  Solution solution;
  int number;
  getNumber(number);

  std::cout << (solution.isPalindrome(number) ? "True" : "false") << std::endl;

  return 0;
}
