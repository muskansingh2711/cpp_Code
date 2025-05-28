// You are using GCC
#include<bits/stdc++.h>
using namespace std;
void area(int len , int br){
    float area = len*br;
    cout<<"Area: "<<area;
}
int main(){
    int len, br;
    cin>>len>>br;
    area(len,br);
}