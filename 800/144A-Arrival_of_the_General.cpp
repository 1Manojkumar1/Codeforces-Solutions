#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int heights[n];
    for(int i=0;i<n;i++){
        cin>>heights[i];
    }
    int mn=0;
    for(int i=0;i<n;i++){
        if(heights[i]<=heights[mn]){
            mn=i;
        }
    }
    int mx=0;
    for(int i=0;i<n;i++){
        if(heights[i]>heights[mx]){
            mx=i;
        }
    }
    int ans=mx+(n-mn-1);
    if(mx>mn){
        ans--;
    }
    cout<<ans;
    return 0;
}