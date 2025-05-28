//Longest increasing subsequence

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> dp(n,1);
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(arr[i]>arr[j]){
                dp[i]=max(dp[j]+1, dp[i]);
            }
        }
    }
    int x=0;
    for(int i:dp){
        if(i>x){
            x=i;
        }
    }
    return x;
}
