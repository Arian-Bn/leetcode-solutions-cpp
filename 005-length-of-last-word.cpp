#include <iostream>

using namespace std;

int lengthOfLastWord(const string& s);

int main () {
    string s;

    cout << "Enter a string: ";
    cin.ignore();
    getline(cin, s);

    cout << "Length of last word in string: " << lengthOfLastWord(s) << endl;
    cout << "Exit!" << endl;

    return 0;
}

int lengthOfLastWord(const string& s) {
    int length = 0;
    int i = s.length() - 1;

    while (i >= 0 && s[i] == ' ')
        i--;

    while (i >= 0 && s[i] != ' ') {
        length++;
        i--;
    }

    return length;
}