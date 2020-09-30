#include <bits/stdc++.h>
//Use macros for easy solutions.
#define min(a,b) ((a)<(b)?(a):(b))
#define max(a,b) ((a)>(b)?(a):(b))
using namespace std;

int main(void) {
    int t;cin>>t;
    while(t--){
        int a,b,r;
        cin>>a>>b;
        r =min(a,b);
        cout<<int(max(a,b)/r)<<endl;
    }
}
