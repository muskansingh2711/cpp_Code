#include<bits/stdc++.h>
using namespace std;
int isprime(int num){
    int flag =0;
    for (int i =2;i<num/2;i++){
        if(num%i==0){
            flag=1;
            break;
        }
    }
    if(flag)
    return 0;
    else
    return 1;
}
int main(){
    int n;
    cin>>n;
    if(isprime(n))
    cout<<"Prime Number";
    else
    cout<<"Not a prime number";
}