#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int cur=1;
    long long time=0;
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        if(x>=cur){
            time+=x-cur;
        }else{
            time+=n-cur+x;
        }
        cur=x;
    }
    cout<<time;
    return 0;
}