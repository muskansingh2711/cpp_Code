// Permutation in C++
#include<bits/stdc++.h>
using namespace std;
void swap(char* arr, int i, int j){
    char t=arr[i];
    arr[i]=arr[j];
    arr[j]=t;
}
void p(char* arr, int start,int end){
    if(start==end-1){
        for(int i=0;i<end;i++){
            cout<<arr[i];
        }
        cout<<endl;
    }
    for(int i=start;i<end;i++){
        swap(arr,start,i);
        p(arr,start+1,end);
        swap(arr,start,i);   //to keep the output in order 
    }
}
int main(){
    char arr[]={'a','b','c'};
    p(arr,0,3);
}