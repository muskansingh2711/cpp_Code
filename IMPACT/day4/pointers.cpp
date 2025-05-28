// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n=10;
//     int *a=&n;
//     cout<<a<<endl;  // Address of n
//     cout<<n<<endl;  // Value of n
//     cout<<*a<<endl; // value of n using pointer
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n=10;
//     int *a=&n;
//     int **a=&a;     // Pointer to pointer
//     cout<<a<<endl;  // Address of n
//     cout<<n<<endl;  // Value of n
//     cout<<*a<<endl; // value of n using pointer
//     cout<<aa<<endl; 
//     cout<<*aa<<endl;
//     cout<<**aa<<endl; 
//     cout<<**aa<<endl;
// }
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[] ={1,2,3,4,5};
    int *p = &a[0];
    for(int i=0;i<2;i++){
        cout<<p[i]<<" "; // 1 2 3 4 5
    }
    p=p+2; 
    cout<<*p<<endl;
   
}

