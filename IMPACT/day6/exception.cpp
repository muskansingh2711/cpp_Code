// Exception handling in C++

#include<bits/stdc++.h>
using namespace std;
int main(){
    int num1,num2,res;
    cin>>num1>>num2;
    string s1= "Divide by zero";
    try{
        if(num2==0){
            throw s1;
        } else{
            res = num1/num2;
            cout<<res;
        }
    } catch(string s1){
        cout<<"Exception: "<<s1;
    }

}


