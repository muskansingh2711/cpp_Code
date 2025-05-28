// removes that key-value pair from the hash table:

#include <bits/stdc++.h>
using namespace std;
int main() {
    unordered_map<int, string> hashTable;
    int n;
    cout << "Enter number of key-value pairs: ";
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int key;
        string value;
        cout << "Enter key: ";
        cin >> key;
        cout << "Enter value: ";
        cin >> value;
        hashTable[key] = value;
    }
    int keyToRemove;
    cout << "Enter the key to remove: ";
    cin >> keyToRemove;
    hashTable.erase(keyToRemove);
    cout << "Hash table after removal:\n";
    for (auto& pair : hashTable) {
        cout << pair.first << " -> " << pair.second << "\n";
    }
    return 0;
}
