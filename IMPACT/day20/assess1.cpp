//Find the majority element
#include <iostream>
#include <vector>
using namespace std;

int majorityElement(const vector<int>& nums) {
    int count = 0, candidate = -1;
    for (int num : nums) {
        if (count == 0) candidate = num;
        count += (num == candidate) ? 1 : -1;
    }
    return candidate;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    int maj = majorityElement(arr);
    cout << "Majority element: " << maj << endl;

    return 0;
}
