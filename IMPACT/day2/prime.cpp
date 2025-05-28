// to find the prime number

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count;
    for(int i=1; i<n;i++){
        if (n%i == 0){
            count ++;
        }
    }
    if (count == 1){
        cout<<n<< "This is a prime number"<< endl;
    }
    else{
        cout<<n<< "This is not a prime number"<< endl;
    }

}