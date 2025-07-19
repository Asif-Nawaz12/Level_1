#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

// Function to reverse a string
string reverseString(const string &str) {
    string reversed = str;
    reverse(reversed.begin(), reversed.end());
    return reversed;
}

// Function to count vowels in a string
int countVowels(const string &str) {
    int count = 0;
    for (char ch : str) {
        ch = tolower(ch);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }
    return count;
}

// Function to check if a string is palindrome
bool isPalindrome(const string &str) {
    string original;
    for (char ch : str) {
        if (isalpha(ch)) {
            original += tolower(ch);
        }
    }
    string reversed = original;
    reverse(reversed.begin(), reversed.end());
    return original == reversed;
}

int main() {
    string input;
    
    cout << "Enter a string: ";
    getline(cin, input);
    
    // Display original string
    cout << "\nOriginal string: " << input << endl;
    
    // Reverse operation
    string reversed = reverseString(input);
    cout << "Reversed string: " << reversed << endl;
    
    // Vowel count
    cout << "Number of vowels: " << countVowels(input) << endl;
    
    // Palindrome check
    if (isPalindrome(input)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }
    
    return 0;
}
