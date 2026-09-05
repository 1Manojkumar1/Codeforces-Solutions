#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    bool change=true;
    for(int i=1;i<s.size();i++){
        if(islower(s[i])){
            change=false;
            break;
        }
    }
    if(change){
        for(auto &c: s){
            if(isupper(c)){
                c=tolower(c);
            }else{
                c=toupper(c);
            }
        }
    }
    cout<<s;
    return 0;
}