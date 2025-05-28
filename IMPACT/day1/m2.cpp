// even and odd numbers
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        if(n%2==0){
            cout<<n<<" is even"<<endl;
        } else{
            cout<<n<<" is odd"<<endl;
        }
    }
    return 0;
}