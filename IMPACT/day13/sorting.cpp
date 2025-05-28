// activity shorting using starting time and ending time(bubble short)
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>end[j+1]){
               int t=end[j];
               end[j]=end[j+1];
               end[j+1]=t;
                t=start[j];
                start[j]=start[j+1];
                start[j+1]=t;
            } 
            int ans=1;
            int last_end=end[0];
            for(int i=1;i<n;i++){
                if(start[i]>=last_end){
                    ans++;
                    last_end=end[i];
                }

            }   
            cout<<ans<<endl;   
        }
    }
    return 0;
}



