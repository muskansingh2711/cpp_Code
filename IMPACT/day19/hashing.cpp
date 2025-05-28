// Hashing in cpp...
#include<bits/stdc++.h>
using namespace std;
int main() {
    unordered_map<int, string> hashTable;
    int n;
    cin>>n;
    cout << "Enter number of key-value pairs: ";
    for (int i = 0; i < n; ++i) {
        int key;
        string value;
        cout << "Enter key (int): ";
        cin >> key;
        cout << "Enter value (string): ";
        cin >> value;
        hashTable[key] = value;
    }
    cout << "\nHash Table contents:\n";
    for (auto pair : hashTable) {
        cout << "Key: " << pair.first << ", Value: " << pair.second << endl;
    }

    return 0;
}
