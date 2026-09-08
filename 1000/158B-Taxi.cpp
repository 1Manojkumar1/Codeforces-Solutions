#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[5]={0};
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr[x]++;
    }
    int ans=0;
    ans+=arr[4];
    ans+=arr[3];
    arr[1]-=min(arr[1],arr[3]);
    ans+=arr[2]/2;
    if(arr[2]%2){
        ans++;
        arr[1]-=min(arr[1],2);
    }
    ans+=(arr[1]+3)/4;
    cout<<ans;
    return 0;
}
