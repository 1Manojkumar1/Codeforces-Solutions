#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string str="hello";
    int x=0;
    for(int i=0;i<s.size();i++){
        if(s[i]==str[x]){
            x++;
            if(x==str.size()){
                cout<<"YES";
                return 0;
            }
        }
    }
    cout<<"NO";
    return 0;
}