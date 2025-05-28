//to find the sum of digits
#include<iostream>
using namespace std;
int main(){
    int num,sum = 0;
    cin>>num;
    int original = num;
    while(num > 0){
        int digit = num%10;
        num = num/10;
        sum += digit;

    }
    cout<<"sum of digit " <<"is :"<<sum<<endl;
    return 0;

}