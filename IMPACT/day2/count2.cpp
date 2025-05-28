#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<< "Enter the to find the the sum of digits : ";
    int sum = 0;
    cin>>n;
    while(n!=0){
        int digit = n%10;
        sum += digit;
        n /= 10;
        if (n==0){
            a = sum;
            n=sum;
            sum=0;
        }
    }
    
    cout<< "The sum of digits is : " << sum << endl;
    
}
