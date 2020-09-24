#include <bits/stdc++.h>
using namespace std;

int main(void){
    int T;
    cin>>T;
    while(T--){
        int a, b, c;
        cin>>a>>b>>c;
        if(b-a == c-b)
            cout<<0<<endl;
        else{
            cout<<(abs((b-a)-(c-b))+1)/2<<endl;
        }
    }
}
