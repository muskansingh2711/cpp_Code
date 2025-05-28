// find the minimum value in binary tree
#include<bits/stdc++.h>
using namespace std;
int minval(int arr[], int n)
{
    int min = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min)
            min = arr[i];
    }
    return min;
}
    return 0;
{
    cout << temp->data << " ";
    inorder(temp->right);
}

int main()
{
    int arr[] = {3, 5, 1, 8, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Minimum value in the array: " << minval(arr, n) << endl;
    return 0;
}