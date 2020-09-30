#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(void){
    ll t,sum=0; cin>>t;
    while(t--){
        ll c, n;
        cin>>c>>n;
        sum = n*(n+1)/2;
        if(sum<=c){
            c=(c-n*(n+1)/2)%n;
            cout<<c<<endl;
        }
        else
            cout<<c<<endl;

    }
}
