// check the no of coins required to make a given amount..
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout << "Enter number of coin types: ";
    cin >> n;
    vector<int> coins(n);
    cout << "Enter coin denominations: ";
    for (int i = 0; i < n; ++i) {
        cin >> coins[i];
    }
    int amount;
    cout << "Enter amount: ";
    cin >> amount;
    sort(coins.rbegin(), coins.rend());
    vector<int> temp; 
    for (int i : coins) {
        while (amount >= i) {
            amount -= i;
            temp.push_back(i);
        }
    }
    if (amount != 0) {
        cout << "Cannot make the amount with the given coins.\n";
    } else {
        cout << "Number of coins used: " << temp.size() << endl;
        cout << "Coins used: ";
        for (int i : temp) {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}
