#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    char cur=str[0];
    int count=1;
    for(int i=1;i<str.size();i++){
        if(str[i]==cur){
            count++;
        }else{
            cur=str[i];
            count=1;
        }
        if(count==7){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}