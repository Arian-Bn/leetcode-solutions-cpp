#include <iostream>
#include <string>

using namespace std;

/**
 * LeetCode Problem #5: Length of Last Word
 *
 * Given a string s consisting of words and spaces, return the length
 * of the last word in the string.
 *
 * A word is a maximal substring of non-space characters.
 */

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

/**
 * Returns the length of the last word in the string.
 *
 * Steps:
 * 1. Start from the end of the string
 * 2. Skip trailing spaces
 * 3. Count characters until the next space or start of string
 */

int lengthOfLastWord(const string& s) {
    int length = 0;
    int i = s.length() - 1;

    // Skip trailing spaces at the end of the string
    while (i >= 0 && s[i] == ' ')
        i--;

    // Count the length of the last word
    while (i >= 0 && s[i] != ' ') {
        length++;
        i--;
    }

    return length;
}