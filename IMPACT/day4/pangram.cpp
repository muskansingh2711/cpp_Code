#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1;
    getline(std::cin,s1);
    int l= s1.length();
    int f[26]={0};
    for(int i=0;i<l;i++){
        f[s1[i]-'a']++;
    }
    int flag =0;
    for(int i=0;i<26;i++){
        if(f[i]==0)
        flag = 1;
        break;
    }
    
    if(flag==0)
    cout<<"pangram";
    else
    cout << "Not a pangram";
}
    