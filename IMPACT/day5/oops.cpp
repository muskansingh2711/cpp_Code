// classes and objects in c++
// check the given string is palindrome or not using class and object and methods

#include<bits/stdc++.h>
using namespace std;
class Palin{
    public:
    string s;
    void process(){
        int l = s.length(), flag=0;
        for(int i=0,j=l-1;i<=j;i++,j--){
            if (s[i]!=s[j]){
                flag = 1;
                break;
            }
        }
        if(flag==0){
            cout<<"The given string is palindrome";
        } else{
            cout<<"The given string is not palindrome";
        }
    }
};
int main(){
    Palin p;
    cin>>p.s;
    p.process();
}