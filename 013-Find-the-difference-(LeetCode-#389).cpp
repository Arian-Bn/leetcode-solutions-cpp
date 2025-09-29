// Find the Difference (LeetCode #389)
// Даны две строки s и t. Строка t получена из s, добавив ровно один лишний
// символ. Найди этот символ.
//
// Пример:
// s = "abcd" → t = "abcde" → ответ: 'e'

#include <iostream>

using namespace std;

string reverseString(string *st);

int main() {
  string s = "abcd";
  string t = "abc";
  int sum_s = 0, sum_t = 0;

  // Считаем сумму ASCII-код в s
  for (int i = 0; i < s.length(); i++)
    sum_s += s[i];

  // Считаем сумму ASCII-код в t
  for (int i = 0; i < t.length(); i++)
    sum_t += t[i];

  char extra = sum_s - sum_t;
  cout << "Result: " << extra << endl;

  return 0;
}
