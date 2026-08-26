#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int toastsWithDrink=(k*l)/nl;
    int toastsWithLime=c*d;
    int toastsWithSalt=p/np;
    cout<<min(toastsWithDrink,min(toastsWithLime,toastsWithSalt))/n;
    return 0;
}