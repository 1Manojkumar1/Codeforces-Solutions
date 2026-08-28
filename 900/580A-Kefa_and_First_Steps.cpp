#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,count=1,mx=1;
    cin>>n;
    long long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<n;i++){
        if(arr[i-1]<=arr[i]){
            count++;
            mx=max(mx,count);
        }else{
            count=1;
        }
    }
    cout<<mx;
    return 0;
}