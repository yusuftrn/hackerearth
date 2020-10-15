#include <bits/stdc++.h>
#define ll unsigned long long int
using namespace std;

int main(){
     ll t; cin>>t;
    while(t--){
        ll k,n,ans,i;
        cin>>n;
        i=1;
        while(i<=sqrt(n)){
            i=i*2;
        }
        if(n/i>=i/2)
            ans=n-n/i;
        else
            ans=(n-(i/2))+1;
        cout<<ans<<endl;
    }
}
