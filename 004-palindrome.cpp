#include <iostream>
#include <string>

using namespace std;

/**
 * LeetCode Problem #4: palindrome
 * Checks if the given string is a palindrome.
 *
 * A palindrome is a string that reads the same forwards and backwards.
 * This function ignores spaces, punctuation and case (in more advanced versions).
 *
 * @param text - input string to check
 * @return     - true if the string is a palindrome, false otherwise
 */

bool isPalindrome(const string& text);

int main() {
    string text;

    cout << "Enter text: ";
    getline(cin, text);

    (isPalindrome(text))
        ? cout << "Yes, it's a palindrome!" << endl
        : cout << "No, it's not a palindrome." << endl;

    return 0;
}

/**
 * Compares characters from both ends of the string.
 * Returns true if all corresponding characters match.
 */

bool isPalindrome(const string& text) {
    int size = text.length();
    if (size == 0) return true;

    for (int i = 0; i < size / 2; i++) {
        if (text[i] != text[size - i - 1]) {
            return false; // Mismatch found
        }
    }

    return true; // All characters matched
}