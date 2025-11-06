/*150
 *Проверка на дубликаты

Дан массив целых чисел nums. Верните true, если какое-либо значение в массиве встречается более одного раза, иначе верните false.

Пример 1:

Ввод: nums = [1, 2, 3, 3]
Вывод: true

Пример 2:

Ввод: nums = [1, 2, 3, 4]
Вывод: false
*/

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> seen;

        for (int num : nums) {
            if (seen.count(num)) {
                return true;
            }
            seen.insert(num);
        }

        return false;
    }
};
