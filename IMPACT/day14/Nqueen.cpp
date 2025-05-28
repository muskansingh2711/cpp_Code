// place 4 queen in matrix (4x4)

#include <bits/stdc++.h>
using namespace std;
bool isSafe(vector<vector<int>>&arr,int row,int col,int n)
{
    for(int i=row;i>=0;i--){
        if(arr[i][col]==1){
            return false;
        }
    }
    for(int i=row, j=col; i>=0 && j>=0;i--,j--){
        if(arr[i][j]==1){
            return false;
        }
    }
    for(int i=row, j=col; i>=0 && j<n;i--,j++){
        if(arr[i][j]==1){
            return false;
        }
    }
    return true;
}
void solve(vector<vector<int>>&arr,int row,int n){
    if(row==n){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        return;
    }
    for(int col=0;col<n;col++){
        if(isSafe(arr, row, col,n)){
            arr[row][col]=1;
            solve(arr, row+1,n);
            arr[row][col]=0;
        }
    }
    return;
}

int main(){
    int n;
    cin>>n;
    vector<vector<int>>arr(n,vector<int>(n,0));
    solve(arr,0,n);
}


