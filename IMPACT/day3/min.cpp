// Finds the minimum value in an array of integers.#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int min = arr[0];
    for (int i=0;i<n;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    cout<<"minimum value is: "<<min<<endl;

    return 0;
}
