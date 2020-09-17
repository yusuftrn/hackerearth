#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t, i, A[100005];
    cin>>t;
    int mod = pow(10,9) + 7;
    long long int res=1;
    for(i=0; i<t;i++){
        cin>>A[i];
        res = (res * A[i]) % mod;
    }
    cout<<res;
}
