//first non-repeating character in a string
#include <bits/stdc++.h>
using namespace std;

int firstNonRepeatingCharIndex(const string& s) {
    unordered_map<char, int> freq;
    for (char c : s) {
        freq[c]++;
    }
    for (int i = 0; i < (int)s.size(); i++) {
        if (freq[s[i]] == 1)
            return i;
    }
    return -1; 
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    int index = firstNonRepeatingCharIndex(input);
    if (index == -1)
        cout << "No non-repeating character found." << endl;
    else
        cout << "First non-repeating character: '" << input[index] << "' at index " << index << endl;
    return 0;
}
