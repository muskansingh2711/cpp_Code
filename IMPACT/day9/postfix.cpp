// You are using GCC
#include <iostream>
#include <stack>
using namespace std;

bool hasRedundantBraces(string expr) {
    stack<char> st;

    for (char ch : expr) {
        if (ch == ')') {
            bool hasOperator = false;
            
            while (!st.empty() && st.top() != '(') {
                char top = st.top();
                st.pop();
                if (top == '+' || top == '-' || top == '*' || top == '/') {
                    hasOperator = true;
                }
            }
            if (!st.empty()) {
                st.pop();
            }
            if (!hasOperator) {
                return true;
            }
        } else {
            st.push(ch);
        }
    }

    return false;
}

int main() {
    string expr;
    cin >> expr;

    if (hasRedundantBraces(expr)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}// You are using GCC
#include <iostream>
#include <stack>
using namespace std;

bool hasRedundantBraces(string expr) {
    stack<char> st;

    for (char ch : expr) {
        if (ch == ')') {
            bool hasOperator = false;
            
            while (!st.empty() && st.top() != '(') {
                char top = st.top();
                st.pop();
                if (top == '+' || top == '-' || top == '*' || top == '/') {
                    hasOperator = true;
                }
            }
            if (!st.empty()) {
                st.pop();
            }
            if (!hasOperator) {
                return true;
            }
        } else {
            st.push(ch);
        }
    }

    return false;
}

int main() {
    string expr;
    cin >> expr;

    if (hasRedundantBraces(expr)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}