// find valid parenthesis 
#include<bits/stdc++.h>
using namespace std;
bool isValid(string s) {
    stack<char> st;
    for (char c : s) {
        if (c == '(' || c == '{' || c == '[') {
            st.push(c);
        } 
        else {
            if (st.empty()) return false; 
            char top = st.top();
            if ((c == ')' && top != '(') ||
                (c == '}' && top != '{') ||
                (c == ']' && top != '[')) {
                return false;
            }
            st.pop(); 
        }
    }
    return st.empty(); 
}
int main() {
    string input;
    cout << "Enter a string of brackets: ";
    cin >> input;
    if (isValid(input)) {
        cout << "Valid Parentheses" << endl;
    } else {
        cout << "Invalid Parentheses" << endl;
    }
    return 0;
}
