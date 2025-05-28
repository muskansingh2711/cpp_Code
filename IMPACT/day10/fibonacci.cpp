// find the fibonacci series using recursion

#include<bits/stdc++.h>
using namespace std;
int fib(int n){
    if(n==0)
    return 0;
    if(n==1)
    return 1;
    else
    return fib(n-1)+fib(n-2);

}

int main(){
    int n;
    cin>>n;
    int res;
    for(int i=0;i<n;i++)
    {
        res = fib(i);
        cout<<res;
    }

}