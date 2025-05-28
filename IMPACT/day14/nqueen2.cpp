// n queens problem 
#include<bits/stdc++.h>
using namespace std;
int n, ans;
void dfs(int r, int col, int d1, int d2){
    if(r==n){
        ans++;
        return;
    }
    for(int i=0;i<n;i++){
        if(!(col&(1<<i)) && !(d1&(1<<(r+i))) && !(d2&(1<<(r-i+n-1)))){
            dfs(r+1, col|(1<<i), d1|(1<<(r+i)),d2|(1<<r-i+n-1));
        }
    }
}
int main(){
    cin>>n;
    ans=0;
    dfs(0,0,0,0);
    cout<<ans<<endl;
}