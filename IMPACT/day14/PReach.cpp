// path destination in matrix
#include<bits/stdc++.h>
using namespace std;
int path(int i, int j , int r, int c){
    if(i==r-1 || j==c-1){
        return 1;
    } else if(i>=r || j>=c){
        return 0;
    } 
    return path(i+1,j,r,c)+path(i,j+1,r,c);

}
int main(){
    int r,c;
    cin>>r>>c;
    int res = path(0,0,r,c);
    cout<<res<<endl;
    return 0;
}
