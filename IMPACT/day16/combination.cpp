// Combination in C++

#include <bits/stdc++.h>
using namespace std;
void combinations(string& arr, string out, int index) {
    if (!out.empty()) {
        cout << out << endl;
    }
    for (int i = index; i < arr.size(); i++) {
        out.push_back(arr[i]);
        combinations(arr, out, i + 1);
        out.pop_back();
    }
}
int main() {
    string arr = "abc";
    string out = "";
    combinations(arr, out, 0);
    return 0;
}
