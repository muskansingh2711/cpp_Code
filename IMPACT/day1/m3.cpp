// check palindrome...

#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    getline(cin, str); 
    int n = str.size();
    for (int i = 0; i < n / 2; i++) {
        if (str[i] != str[n - i - 1]) {
            cout << str << " is not a palindrome" << endl;
            return 0; 
        }
    }
    cout << str << " is a palindrome" << endl;

    return 0;
}
