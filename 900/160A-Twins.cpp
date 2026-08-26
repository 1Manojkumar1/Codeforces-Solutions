#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int totalSum=0,nums[n];
    for(int i=0;i<n;i++){
        cin>>nums[i];
        totalSum+=nums[i];
    }
    double half=totalSum/2;
    int count=0;
    int curSum=0;
    sort(nums,nums+n,greater<int>());
    int i=0;
    while(curSum<=half){
        curSum+=nums[i];
        count++;
        i++;
    }
    cout<<count;
    return 0;
}