#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    int x=0;
    while(m!=0 and n!=0){
        x++;
        m--;
        n--;
    }
    if(x%2==1){
        cout<<"Akshat";
    }else{
        cout<<"Malvika";
    }
    return 0;
}