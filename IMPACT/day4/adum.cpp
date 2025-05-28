// You are using GCC
#include<bits/stdc++.h>
using namespace std;
int rev(int n){
    int rev = 0;
    while(n>0){
        rev = rev*10 + n%10;
        n/=10;
    }
    return rev;
}
int main(){
    int num;
    cin>>num;
    int sq1 = num*num;
    int rev1 = rev(num);
    int sq2 = rev1*rev1;
    int rev2 = rev(sq2);
    
    if(sq1=sq2){
        cout<<"Adam number";
    } else{
        cout<<"Not a adam number";
    }
}